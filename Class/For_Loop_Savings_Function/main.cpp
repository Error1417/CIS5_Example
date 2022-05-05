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

using namespace std;

// User Libraries

// Global Constants
// Physics/Chemistry/Math/Conversions higher dimension only

// Function Prototypes
const char PERCENT = 100; 
// Program Execution Begins Here!!!

// Added it up here, so the program can see it.

int main(int argc, char** argv)
{
    // Set the Random Number Seed
    const int SIZE = 100;
    float balance, // balance to start $'s
          intRate, // interest rate in percent
          savings[SIZE], // savings accumulated
          interest[SIZE];//Yearly interest computation by year
    int initD8[SIZE], // initial date/ year array
        nYear[SIZE],// number year array
        numCmpd; // number of compounding periods
    
    // Initial Variables
    balance = 100; // $100
    intRate = 6.0/PERCENT; // 6 percent
    initD8[0] = 2022; // this year
    numCmpd = 12; // 12 years
    savings[0] = balance;
    
    
    // Map the Inputs to the outputs
    for(int year = 0; year<=numCmpd; year++){
        nYear[year] = year;
        interest[year] = savings[year]*intRate;
        initD8[year+1]=initD8[year]+1;
        savings[year+1] =savings[year] + interest[year];
    }
    
    
    cout << fixed << setprecision(2) << showpoint;
    cout << "        $ "<< savings[0]<< "  = Initial Balance in $'s" << endl;
    cout << "            " << intRate*PERCENT << "  = Initial Rate%" << endl;
    cout << endl;
    cout << "Year   Date    Balance   Interest" << endl;
    
    for(int year = 0; year<=numCmpd; year++){
        cout << setw(2) << nYear[year] << setw(9) << initD8[year] << setw(10) 
                << savings[year] << setw(10) << interest[year] << endl;
    }
    
    // Display the Inputs and Outputs
    
    // Exit the code
    
    return 0;
}