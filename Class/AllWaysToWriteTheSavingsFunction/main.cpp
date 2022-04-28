/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ismael Perez
 *
 * Created on April 21, 2022, 10:42 AM
 */

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */

const unsigned char PERCENT = 100; //Percentage conversion

float save1(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);
float save4(float,float,float);
float save5(float,float,int=12);
void  save6(float &,float,int); // input/output parameter, passed by reference
int   save7(float&,float,int); // static variables

int main(int argc, char** argv) 
{
  
    float pv, // Present value in $'s
     intRate, // Interest rate in %
          fv; // future value in dollars
    int nCmp; // Number of compounding periods
    
    pv = 100.0f; // 100 dollars
    intRate= 6; //5 percent
    nCmp= 72/intRate; //Rule of 72 should be about how long to double your savings 
    
    intRate /=PERCENT; 
    
    cout << fixed << setprecision(2) << showpoint;
    cout << "FV("<< pv<<"," << intRate<< ","<< nCmp<<")"<< endl;
    cout << "Savings using Math Library         = $" << save1(pv,intRate,nCmp)<< endl;
    cout << "Savings using Math Library Exp/Log = $" << save2(pv,intRate,nCmp)<< endl;
    cout << "Savings using For-Loop             = $" << save3(pv,intRate,nCmp)<< endl;
    cout << "Savings using Recursion            = $" << save4(pv,intRate,nCmp)<< endl;
    cout << "Savings using Same Name            = $" << save4(pv,intRate,static_cast<float>(nCmp))<< endl;
    cout << "Savings using Defaulted Parameter  = $" << save5(pv,intRate)<< endl;
    
    float pvfv=pv;
    save6(pvfv,intRate,nCmp);
    cout << "Savings using Pass by Reference    = $" << pvfv << endl;
    for(int k=1; k<5; k++){
        pvfv=pv;
        save7(pvfv,intRate,nCmp);
    }
    pvfv=pv;
    int count = save7(pvfv,intRate,nCmp);
    cout << "Savings using Static Variable      = $" << pvfv << endl;
    cout << "The last function was called " << count << " times" << endl;

    return 0;
}




int save7(float &pvfv,float i,int n){
    static int count;//count keeps track of the number of times the function
                     // is called!!!
    
    for(int j=0; j<n; j++){
        pvfv*=(1+i);
    }
    count++;
    return count;
}


void save6(float &pvfv,float i,int n){
    for(int j=0; j<n; j++){
        pvfv*=(1+i);
    }
} 

float save5(float p,float i,int n){
    for(int j=0; j<n; j++){
        p*=(1+i);
    }
    return p;
}

float save4(float p,float i,float n){
    //base case
    return p*pow(1+i,n);
}

float save4(float p,float i,int n){
    //base case
    if(n<= 0)return p;
    //recursion
    return save4(p,i,n-1)*(1+i);
}

float save3(float p,float i,int n){
    for(int j=0; j<n; j++){
        p*=(1+i);
    }
    return p;
}

float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

float save1(float p,float i,int n){
    return p*pow(1+i,n);
}