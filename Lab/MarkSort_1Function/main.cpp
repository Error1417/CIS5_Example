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
void filAry(int [],int);
void prntAry(int [],int,int);
void mrkSort(int [],int);
// Program Execution Begins Here!!!

// Added it up here, so the program can see it.


int main(int argc, char** argv)
{
    // Set the Random Number Seed
    srand(static_cast<unsigned int> (time(0)));
    
    // Initial Variables
    const int SIZE=100;
    int array[SIZE];
    int perline;

    
    // Map the Inputs to the outputs
    perline=10;
    filAry(array,SIZE);
    prntAry(array,SIZE,perline);
    mrkSort(array,SIZE);
    prntAry(array,SIZE,perline);
    
    // Display the Inputs and Outputs
    
    // Exit the code
    
    return 0;
}

void mrkSort(int a[],int n){
    for(int j=0;j<n-1;j++){
        for(int i=j+1;i<n;i++){
            if(a[j]>a[i]){
                swap(a[j],a[i]);
            }
        }
    }
}

void filAry(int a[],int n){
    for(int i=0; i<n; i++){
        a[i]= rand()%90+10; // {10-99}
    }
}

void prntAry(int a[],int n, int perline){
    cout << endl;
    for(int i=0; i<n ; i++){
        cout << a[i] << " ";
        if(i%perline == (perline-1)) cout << endl;
    }
    cout << endl;
}
