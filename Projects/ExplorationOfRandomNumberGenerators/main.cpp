/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ismael Perez
 *
 * Created on April 7, 2022, 10:15 AM
 * Purpose: Random number Generation Explorations
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
    
    int minRand, // min Random Number desired
        maxRand, // max Random Number desired   
        randNum; // Random number achieved
    
    // Initial Variables
    minRand = 10;
    maxRand = 99;
    
    for(int test = 1; test <=100; test++){
        randNum = rand()%(maxRand-minRand+1)+ minRand;
        cout << randNum <<" ";
        
        if(test%10==9)cout << endl;
    }
    
    
    
    
    // Map the Inputs to the outputs
   
    
    // Display the Inputs and Outputs
    
    // Exit the code
    
    return 0;
}

