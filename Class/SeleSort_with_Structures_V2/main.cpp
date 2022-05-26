/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ismael Perez
 *
 * Created on May 26, 2022, 10:39 AM
 * Purpose: replace array / size with structure
 */

//System Libraries

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime> // time library

using namespace std;

// User Libraries
#include "Array.h"

// Global Constants
// Physics/Chemistry/Math/Conversions higher dimension only

// Function Prototypes
Array* filAry(int);
void prntAry(const Array* ,int);
void swap1(int &, int &);
void selSort(Array*);
// Program Execution Begins Here!!!

// Added it up here, so the program can see it.

int main(int argc, char** argv)
{
    // Set the Random Number Seed
    srand(static_cast<unsigned int> (time(0)));
    
    int size = 100;
    Array *array;
    int perline = 10;
    
    array=filAry(size);
    
    prntAry(array,perline);
    // Display the Inputs and Outputs
    selSort(array);
    
    prntAry(array,perline);
    
    // delete memory
    delete[]array->data;
    delete array;
    
    return 0;
}


Array* filAry(int n){
    Array *a = new Array;
    a->size = n;
    a->data =new int [a->size];
    for(int i=0; i<a->size; i++){
        a->data[i]= rand()%90+10; // {10-99}
    }
}

void swap1(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

void selSort(Array *a){
    for(int i = 0; i <a->size-1; i++){
        int indx =i;
        for(int j=i+1; j<a->size; j++){
            if(a->data[indx]>a->data[j]){
                indx=j;
            }
        }
        swap1(a->data[i],a->data[indx]);
    }
}

void prntAry(const Array *a, int perline){
    cout << endl;
    for(int i=0; i<a->size ; i++){
        cout << a->data[i] << " ";
        if(i%perline == (perline-1)) cout << endl;
    }
    cout << endl;
}
