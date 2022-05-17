/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ismael Perez
 *
 * Created on May 17, 2022, 12:12 AM
 * Purpose: Savings Table
 */

//System Libraries

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime> // time library

using namespace std;

// User Libraries

// Global Constants
// Physics/Chemistry/Math/Conversions higher dimension only

// Function Prototypes
void filAry(int [],int);
void prntAry(int[],int,int);
void swap1(int &, int &);
void selSort(int[],int);
// Program Execution Begins Here!!!

// Added it up here, so the program can see it.

int main(int argc, char** argv)
{
    // Set the Random Number Seed
    srand(static_cast<unsigned int> (time(0)));
    
    const int SIZE=100;
    int array[SIZE];
    int perline;
    
    
    perline=10;
    filAry(array,SIZE);
    
    prntAry(array,SIZE,perline);
    // Display the Inputs and Outputs
    selSort(array,SIZE);
    
    prntAry(array,SIZE,perline);
    // Exit the code
    
    return 0;
}


void filAry(int a[],int n){
    for(int i=0; i<n; i++){
        a[i]= rand()%90+10; // {10-99}
    }
}

void swap1(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}


void selSort(int a[],int n){
    for(int i = 0; i <n-1; i++){
        int indx =i;
        for(int j=i+1; j<n; j++){
            if(a[indx]>a[j]){
                indx=j;
            }
        }
        swap1(a[i],a[indx]);
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
