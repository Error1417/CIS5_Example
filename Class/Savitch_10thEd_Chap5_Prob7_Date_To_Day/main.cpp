/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ismael Perez
 * Purpose: day of the week function
 *
 * Created on April 21, 2022, 10:42 AM
 */

#include <iomanip>
#include <iostream>

using namespace std;

/*
 * 
 */

void input(int&, int&, int&);
bool lpYear (int);
int CntryVl(int);
int yrVal(int);
int mnVal(int, int);
string dyOfWk(int, int, int);

int main(int argc, char** argv) 
{
    int iYear,
        iMonth,
        iDay;
    
    input(iYear, iMonth, iDay);
    
    cout << "The day of the week is " << dyOfWk(iMonth, iDay, iYear);
    
    
    
    return 0;
}

string dyOfWk(int month, int day, int year){
    // first calculate the day number
    int dyNum= day +mnVal(month, year)+
               yrVal(year)+ CntryVl(year);
    dyNum%=7;
    switch(dyNum){
        case 0: return "Sunday";
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
    }
}

int mnVal(int month, int year){
    switch(month){
        case 1: return lpYear(year)? 6:0;
        case 2: return lpYear(year)? 2:3;
        case 3: case 11: return 3;
        case 4: case 7: return 6;
        case 5: return 1;
        case 6: return 4;
        case 8: return 2;
        case 9: case 12: return 5;
        case 10: return 0;
    }
}

int yrVal(int year){
    //step 1
    int stp1 = year%100;
    //step 2
    int stp2 = stp1/4;
    //step 3
    return stp1+stp2;
}

int CntryVl(int year){
    //step 1 
    int cent=year/100;
    //step 2
    cent %=4;
    //step 3
    cent = 3-cent;
    //step 4
    return 2*cent;
}

bool lpYear (int year){
    return ((year%400 == 0 || year%4 == 0)&&!(year%100 == 0));
}


void input(int& iYear, int& iMonth, int& iDay){
    string month;
    const int SIZE=4;
    char day[SIZE];
    
    //Prompt user
    cout << "Input the date to convert to day here"<< endl;
    cout << "Format date like July 4, 2008" << endl;
    cin >> month>>day>>iYear;
    
    cout << month<< " " << day << " "<< iYear << endl;
    if(iYear<0){
        cout << "Your Having a Bad Year" << endl;
        exit(EXIT_FAILURE);
    }
    
    // Convert char day to integer day
    int cnt=0;
    while(day[cnt]!='\0'){
        cnt++;
    }
    if(cnt==2)iDay=day[0]-48; //single digit days
    if(cnt==3)iDay=(day[0]-48)*10 + (day[1]-'0');//two digit days
    if(iDay<0 || iDay >31){
        cout << "Your Having a Bad Day" << endl;
        exit(EXIT_FAILURE);
    }
    //convert month to integer month
    
    if(month=="January")       iMonth=1;
    else if(month=="February") iMonth=2;
    else if(month=="March")    iMonth=3;
    else if(month=="April")    iMonth=4;
    else if(month=="May")      iMonth=5;
    else if(month=="June")     iMonth=6;
    else if(month=="July")     iMonth=7;
    else if(month=="August")   iMonth=8;
    else if(month=="September")iMonth=9;
    else if(month=="October")  iMonth=10;
    else if(month=="November") iMonth=11;
    else if(month=="December") iMonth=12;
    else{
        cout << "Bad month" << endl;
        exit(EXIT_FAILURE);
    }
}
