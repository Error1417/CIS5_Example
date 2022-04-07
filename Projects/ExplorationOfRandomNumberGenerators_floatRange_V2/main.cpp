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
 * Purpose: Random number Generation Random number between 0 and 1
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
    
    
    unsigned int maxRand; // max random number 
    float minR, // min Random Number desired
          maxR, // max Random Number desired  
          randNum; // Random number achieved
    
    // Initial Variables
    maxRand = (1 << 15)-1; // 2^15-1 -> pow(2,15)-1
    minR=maxR= 1.0f*rand() / maxRand;
    
    for(int test = 1; test <=10; test++){
        randNum =1.0f*rand() / maxRand;
        if(randNum > maxR)maxR = randNum;
        if(randNum < minR)minR = randNum;
    }
    
    // Map the Inputs to the outputs
   
    // Display the Inputs and Outputs
    cout << "The minimum random number encountered = " << minR << endl;
    cout << "The maximum random number encountered = " << maxR << endl;
    // Exit the code
    
    return 0;
}

