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
 * Purpose: Create a Weather file
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
    
    fstream out1, out2;
    const int SIZE = 20;
    char fileNm1[SIZE] = "weather1.dat";
    string fileNm2 = "weather2.dat";
    unsigned char nMonths, nDays;
    
    // Initial Variables
    out1.open(fileNm1,ios::out);
    out2.open(fileNm2,ios::out);
    nMonths = 3;
    nDays = 30;
    
    // Map the Inputs to the outputs
    for(int month = 1; month <= nMonths; month++){
        for(int day = 1; day<= nDays; day++){
            char typDay =rand()%3;
            switch(typDay){
                case 0: out1 << 'R';
                        out2 << 'R';
                        cout << 'R';
                        break;
                case 1: out1 << 'C';
                        out2 << 'C';
                        cout << 'C';
                        break;
                case 2: out1 << 'S';
                        out2 << 'S';
                        cout << 'S';
                        break;         
            }
        }
        cout << endl;
        out1 << endl;
        out2 << endl;
    }
    
    // Display the Inputs and Outputs
    
    // Exit the code
    out1.close();
    out2.close();
    
    return 0;
}

