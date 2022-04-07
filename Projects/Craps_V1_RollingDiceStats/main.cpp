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
 * Purpose: Roll the Dice
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

    
    // Initial Variables
    unsigned int nThrows; // number of throws
    unsigned int f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12; // frequency of each throw
    
    
    // Map the Inputs to the outputs
    nThrows = 36000;
    f2=f3=f4=f5=f6=f7=f8=f9=f10=f11=f12=0;
    
    for(int toss =  1; toss<= nThrows; toss++){
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum= die1+die2;
        
        switch(sum){
            case 2: f2++;break;
            case 3: f3++;break;
            case 4: f4++;break;
            case 5: f5++;break;
            case 6: f6++;break;
            case 7: f7++;break;
            case 8: f8++;break;
            case 9: f9++;break;
            case 10: f10++;break;
            case 11: f11++;break;
            case 12: f12++;break;
            default: cout << "Something wrong" << endl;

        }
    }
    
    cout << "Number of times 2 dice where thrown = " << nThrows << endl;
    cout << "Number of times 2 dice where thrown = "
         << f2+f3+f4+f5+f6+f7+f8+f9+f10+f11+f12 << endl << endl;
    cout << "Sum = 2 -> was thrown ->" << f2 << " times" << endl;
    cout << "Sum = 3 -> was thrown ->" << f3 << " times" << endl;
    cout << "Sum = 4 -> was thrown ->" << f4 << " times" << endl;
    cout << "Sum = 5 -> was thrown ->" << f5 << " times" << endl;
    cout << "Sum = 6 -> was thrown ->" << f6 << " times" << endl;
    cout << "Sum = 7 -> was thrown ->" << f7 << " times" << endl;
    cout << "Sum = 8 -> was thrown ->" << f8 << " times" << endl;
    cout << "Sum = 9 -> was thrown ->" << f9 << " times" << endl;
    cout << "Sum = 10 -> was thrown ->" << f10 << " times" << endl;
    cout << "Sum = 11 -> was thrown ->" << f11 << " times" << endl;
    cout << "Sum = 12 -> was thrown ->" << f12 << " times" << endl;
    
    
    
    // Display the Inputs and Outputs
    
    // Exit the code
    
    return 0;
}

