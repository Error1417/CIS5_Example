/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ismael Perez
 *
 * Created on April 7, 2022, 10:42 AM
 * Purpose: Random number Generation Explorations for floats
 */

//System Libraries

#include <cstdlib>
#include <iostream>
#include <ctime>

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
    
    unsigned int minRand, // min Random Number desired
                 maxRand, // max Random Number desired   
                 randNum; // Random number achieved
    
    // Initial Variables
    minRand=maxRand=rand();
    
    for(int test = 1; test <=1000; test++){
        randNum = rand();
        
        if(randNum > maxRand)maxRand = randNum;
        if(randNum < minRand)minRand = randNum;
    }
    
    // Map the Inputs to the outputs
   
    // Display the Inputs and Outputs
    cout << "The minimum random number encountered = " << minRand << endl;
     cout << "The maximum random number encountered = " << maxRand << endl;
    // Exit the code
    
    return 0;
}

