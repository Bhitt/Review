/* 
 * File:   main.cpp
 * Author: Branden Hitt
 *      Purpose: account for inflation over a duration
 */

//System Libraries
#include <iostream>//I/O standard
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float itmCst=0, nCst=0; //item cost and new item cost after inflation
    short dur=0; //duration of years before purchase of item
    float infR=0; //inflation rate
    short c=0; //counter for loop
    //Prompt the user for inputs
    cout<<"How much is the cost of the item?"<<endl;
    cin>>itmCst;
    cout<<"How many years until you purchase the item?"<<endl;
    cin>>dur;
    cout<<"What is the rate of inflation? (%5.6 should be entered as 5.6)"<<endl;
    cin>>infR;
    //Calculate new percentage amount
    infR/=100;
    //Calculate for inflation using loop
    c=dur; //set counter
    nCst=itmCst; //set new cost to initial item cost
    do{
        //add inflation
        nCst+=(nCst*infR);
        //decrement the duration counter
        c-=1;
    }while(c>0);
    //Output estimated cost after specified period
    cout<<"The price of the item after "<<dur<<" years is $"<<nCst<<endl;
    
    return 0;
}