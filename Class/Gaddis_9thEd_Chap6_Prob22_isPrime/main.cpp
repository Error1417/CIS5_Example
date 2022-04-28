/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ismael Perez
 * Purpose: Prime function
 *
 * Created on April 28, 2022, 10:42 AM
 */

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */

bool isPrime(unsigned int);

int main(int argc, char** argv) 
{
    unsigned int endPt, wide, cnt, perLine;
    
    
    cout << "This program finds prime numbers" << endl;
    cout << "Input the range of numbers n > 1 to display list" << endl;
    cout << "Input an integer to representing the endpoint of the range" << endl;
    cin >> endPt;
    cout << "Input number of columns per line" << endl;
    cin >> perLine;
    
    
    //Determine the width
    cout << "All the prime numbers between 2 and " << endPt << endl << endl;
    wide= log(endPt)/log(10)+2; // power of 10 with 2 space buffer
    cnt = -1;
    for(int i = 1; i <= endPt; i++){
        if(isPrime(i)){
            cout << setw(wide) << i;
            cnt++;
            if(cnt%perLine==perLine-1)cout << endl; // new row
        }
    }
    
    
    return 0;
}

bool isPrime(unsigned int n){
    //Initialize variables. base conditions
    if(n==0 || n==1)return false;// not prime
    if (n==2)return true; // 2 is prime
    unsigned int stpPnt = sqrt(n)+1; // stopping point in search of n
    //loop to find and multiplicative factor
    for(int test =2; test <= stpPnt; test++){
        if(n%test==0)return false;           
    }
    return true; 
}