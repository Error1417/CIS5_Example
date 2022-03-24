/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ismael Perez
 *
 * Created on March 24, 11:25 AM
 * Purpose: Read a weather file
 * specifically 3 summer months june/ july/ august
 * 30 days per month
 * random rainy-R, cloudy-C, sunny-S days
 */

//System Libraries

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstring>
using namespace std;

// User Libraries

// Global Constants
// Physics/Chemistry/Math/Conversions higher dimension only

// Function Prototypes

// Program Execution Begins Here!!!

// Added it up here, so the program can see it.

int main(int argc, char** argv)
{
    // Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    fstream in1, in2;
    const int SIZE = 20;
    char fileNm1[SIZE] = "weather1.dat";
    string fileNm2 = "weather2.dat";
    unsigned char nMonths, nDays;
    
    // Initial Variables
    in1.open(fileNm1,ios::in);
    in2.open(fileNm2,ios::in);
    nMonths = 3;
    nDays = 30;
    
    // The first file contents
    cout << "Weather1.dat file content" << endl;
    for(int month = 1; month <= nMonths; month++){
        for(int day = 1; day<= nDays; day++){
            char weather;
            in1 >> weather;
            cout << weather;
        }
        cout << endl;
    }
    
    
    // The second file contents file contents
    cout << endl << "Weather2.dat file content" << endl;
    for(int month = 1; month <= nMonths; month++){
        for(int day = 1; day<= nDays; day++){
            char weather;
            in2 >> weather;
            cout << weather;
        }
        cout << endl;
    }
    
    // Display the Inputs and Outputs
    
    // Exit the code
    in1.close();
    in2.close();
    
    return 0;
}

