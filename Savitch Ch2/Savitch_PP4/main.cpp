/* 
 * File:   main.cpp
 * Author: Branden Hitt
 *      Purpose: calculate the face value needed
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
    float needRec; //amount the customer needs to receive
    float intRate; //interest rate
    float loanDur; //loan duration
    float faceV; //face value
    float monthP; //monthly payment
    //Prompt the user for inputs
    cout<<"We are going to calculate the Face Value of your loan to get you the"<<endl;
    cout<<"amount of money needed."<<endl;
    cout<<"First, input the amount of money you need:"<<endl;
    cin>>needRec;
    cout<<"Next, input the interest rate: (15% is entered as 0.15)"<<endl;
    cin>>intRate;
    cout<<"Last, input the duration of the loan in months:"<<endl;
    cin>>loanDur;
    //Calculate face value
    faceV=(needRec/(1-(intRate*(loanDur/12))));//formula to calculate for face value
    monthP=faceV/loanDur;//monthly payment formula
    //Output
    cout<<"Your total loan after adding the interest owed will be $"<<faceV<<"."<<endl;
    cout<<"The rate you will pay is $"<<monthP<<" a month for "<<loanDur<<" months."<<endl;
    return 0;
}