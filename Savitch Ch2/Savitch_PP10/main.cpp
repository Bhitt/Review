/* 
 * File:   main.cpp
 * Author: Branden Hitt
 *      Purpose: read in 10 whole numbers, output different sums
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
    float num1,num2,num3,num4,num5,num6,num7,num8,num9,num10; //user input
    float sumG,sumL,sumT,avgG,avgL,avgT; //sums and averages of numbers
    float gC=0,lC=0; //counters
    //Prompt the user for inputs
    cout<<"For this program you will enter in 10 whole numbers, one at a time."<<endl;
    cout<<"Number 1: "<<endl;
    cin>>num1;
    if(num1>0)sumG+=num1,gC++;
    else sumL+=num1,lC++;
    sumT+=num1;
    cout<<"Number 2: "<<endl;
    cin>>num2;
    if(num2>0)sumG+=num2,gC++;
    else sumL+=num2,lC++;
    sumT+=num2;
    cout<<"Number 3: "<<endl;
    cin>>num3;
    if(num3>0)sumG+=num3,gC++;
    else sumL+=num3,lC++;
    sumT+=num3;
    cout<<"Number 4: "<<endl;
    cin>>num4;
    if(num4>0)sumG+=num4,gC++;
    else sumL+=num4,lC++;
    sumT+=num4;
    cout<<"Number 5: "<<endl;
    cin>>num5;
    if(num5>0)sumG+=num5,gC++;
    else sumL+=num5,lC++;
    sumT+=num5;
    cout<<"Number 6: "<<endl;
    cin>>num6;
    if(num6>0)sumG+=num6,gC++;
    else sumL+=num6,lC++;
    sumT+=num6;
    cout<<"Number 7: "<<endl;
    cin>>num7;
    if(num7>0)sumG+=num7,gC++;
    else sumL+=num7,lC++;
    sumT+=num7;
    cout<<"Number 8: "<<endl;
    cin>>num8;
    if(num8>0)sumG+=num8,gC++;
    else sumL+=num8,lC++;
    sumT+=num8;
    cout<<"Number 9: "<<endl;
    cin>>num9;
    if(num9>0)sumG+=num9,gC++;
    else sumL+=num9,lC++;
    sumT+=num9;
    cout<<"Number 10: "<<endl;
    cin>>num10;
    if(num10>0)sumG+=num10,gC++;
    else sumL+=num10,lC++;
    sumT+=num10;
    //calculate extras
    avgG=sumG/gC; //average of positives
    avgL=sumL/lC; //average of negatives
    avgT=sumT/10; //average of all numbers
    //Output 
    cout<<"The sum of all the numbers greater than zero: "<<sumG<<endl;
    cout<<"The sum of all the numbers less than zero   : "<<sumL<<endl;
    cout<<"The sum of all the numbers                  : "<<sumT<<endl;
    cout<<"The average of all the numbers greater than zero: "<<avgG<<endl;
    cout<<"The average of all the numbers less than zero   : "<<avgL<<endl;
    cout<<"The average of all the numbers                  : "<<avgT<<endl;
    //Exit stage right
    return 0;
}