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
void mrkSort(int[],int);
int linSrch(int[], int, int);
int binSrch(int[], int, int);
// Program Execution Begins Here!!!

// Added it up here, so the program can see it.

int main(int argc, char** argv)
{
    // Set the Random Number Seed
    srand(static_cast<unsigned int> (time(0)));
    
    const int SIZE=100;
    int array[SIZE];
    int perline;
    int value;
    
    value=rand()%90+10;
    perline=10;
    filAry(array,SIZE);
    cout << "Array before Sorting" << endl;
    prntAry(array,SIZE,perline);
    // Display the Inputs and Outputs
    
    int index=linSrch(array, SIZE, value);
    cout << "Searching using the Linear Technique" << endl;
    if(index!=-1){
        cout << "Value: " << value << " found at index = " << index << endl;
    }
    else{
        cout << "Value: " << value << " not found" << endl;
    }
    
    mrkSort(array, SIZE);
    cout << endl<< "Array after Sorting" << endl;
    prntAry(array,SIZE,perline);
    
    index=binSrch(array, SIZE, value);
    cout << "Searching using the Binary Technique" << endl;
    if(index!=-1){
        cout << "Value: " << value << " found at index = " << index << endl;
    }
    else{
        cout << "Value: " << value << " not found" << endl;
    }
    // Exit the code
    
    return 0;
}


void filAry(int a[],int n){
    for(int i=0; i<n; i++){
        a[i]= rand()%90+10; // {10-99}
    }
}


int binSrch(int a[], int n, int val2Fnd){
    int beg=0; // beginning of array
    int end=n-1; // end of array
    do 
    {
        int midPt= (end+beg)/2; // calculate the mid point
        if(a[midPt]==val2Fnd)return midPt;
        else if(a[midPt]>val2Fnd){
            end = midPt-1;
        }
        else{
            beg = midPt+1;
        }
    }while(end>beg);
    return -1;
}


int linSrch(int a[], int n, int val2Fnd){
    for(int i=0; i<n;i++){
        if(a[i]==val2Fnd)return i;
    }
    return -1;
}

void mrkSort(int a[],int n){
    for(int j=0;j<n-1;j++){
        for(int i=j+1;i<n;i++){
            if(a[j]>a[i]){
                //swap(a[j],a[i]);
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
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
