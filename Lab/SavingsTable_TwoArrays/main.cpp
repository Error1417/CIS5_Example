/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ismael Perez
 *
 * Created on March 24, 12:12 AM
 * Purpose: Savings Table
 */

//System Libraries

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

// User Libraries

// Global Constants
// Physics/Chemistry/Math/Conversions higher dimension only

// Function Prototypes
const char PERCENT = 100; 
const int COLS = 4;
// Program Execution Begins Here!!!

// Added it up here, so the program can see it.
void model(int,float,float[][COLS]);
void view(int,float,float[][COLS]);

int main(int argc, char** argv)
{
    // Set the Random Number Seed
    const int SIZE = 100;
    float balance, // balance to start $'s
          intRate; // interest rate in percent
    int numCmpd; // number of compounding periods
    //Col 0-> year, 1->, date 2->, savings, 3-> interest
    float save[SIZE][COLS];
    
    // Initial Variables
    balance = 100; // $100
    intRate = 6.0/PERCENT; // 6 percent
    save[0][1] = 2022; // this year
    numCmpd = 12; // 12 years
    save[0][2] = balance;
    
    // Map the Inputs to the outputs
    model(numCmpd,intRate,save);
    view(numCmpd,intRate,save);
    
    
    
    // Display the Inputs and Outputs
    
    // Exit the code
    
    return 0;
}


void view(int numCmpd,float intRate,float save[][COLS]){
    cout << fixed << setprecision(2) << showpoint;
    cout << "        $ "<< save[0][2]<< "  = Initial Balance in $'s" << endl;
    cout << "            " << intRate*PERCENT << "  = Initial Rate%" << endl;
    cout << endl;
    cout << "Year   Date    Balance   Interest" << endl;
    
    for(int year = 0; year<=numCmpd; year++){
        cout << setw(2) <<static_cast<int>(save[year][0]) << setw(9) 
                <<static_cast<int>(save[year][1]) << setw(10) 
                << save[year][2] << setw(10) << save[year][3] << endl;
    }
}


void model(int numCmpd,float intRate,float save[][COLS]){
    for(int year = 0; year<=numCmpd; year++){
        save[year][0] = year;
        save[year][3] = save[year][2]*intRate;
        save[year+1][1] = save[year][1]+1;
        save[year+1][2] = save[year][2] + save[year][3];
    }
}