/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ismael Perez
 *
 * Created on April 7, 2022, 11:45 AM
 * Purpose: Win,Lose,Or Roll again
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
    
    unsigned int win,lose,rollAgn;
    unsigned int nGames;
    
    
    win=lose=rollAgn = 0;
    nGames = 1000;
    
    for(int game = 1; game<=nGames; game++){
        char die1= rand()%6+1;
        char die2= rand()%6+1;
        char sum= die1 +die2;
        
        if(sum == 7 || sum == 11)win++;
        else if(sum == 2 || sum ==3 || sum ==12)lose++;
        else rollAgn++;
    }
    
    cout << "Total number of games = " << nGames << endl;
    cout << "Total number of games = " << win+lose+rollAgn << endl;
    cout <<"Your wins = " << win << endl;
    cout << "Your loses = " << lose << endl;
    cout << "Roll Again = " << rollAgn << endl;
    
    
    // Display the Inputs and Outputs
    
    // Exit the code
    
    return 0;
}

