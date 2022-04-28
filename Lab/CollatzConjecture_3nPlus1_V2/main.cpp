/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ismael Perez
 *
 * Created on April 28, 2022, 11:40 AM
 */

//System Libraries

#include <cstdlib>
#include <iostream>

using namespace std;

// User Libraries

// Global Constants
// Physics/Chemistry/Math/Conversions higher dimension only

// Function Prototypes
void thrNp1(unsigned int); // 3n+1 collatz sequence
// Program Execution Begins Here!!!

// Added it up here, so the program can see it.

int main(int argc, char** argv)
{
    // Set the Random Number Seed
    unsigned int seqStrt;
    
    // Initial Variables
    cout << "This program outputs the Collatz Sequence" << endl;
    cout << "Input the initial sequence value" << endl;
    cin >> seqStrt;
    
    // Map the Inputs to the outputs
    thrNp1(seqStrt);
    
    // Display the Inputs and Outputs
    
    // Exit the code
    
    return 0;
}

void thrNp1(unsigned int n){
    int cnt =-1;
    
    while(n>1){
        cout << n << " ";
        cnt++;
        if(cnt%10==9)cout << endl;
        if(n%2){
            n=(n<<1)+n+1; //2*n + n + 1 (<< = multiply by 2)
        }
        else{
            n>>=1; // bit shifting , like dividing by 2
        }
    }
    cout << n << endl;
}
