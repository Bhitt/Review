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
    short num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
    short sumG,sumL,sumT;
    //Prompt the user for inputs
    cout<<"For this program you will enter in 10 whole numbers, one at a time."<<endl;
    cout<<"Number 1: "<<endl;
    cin>>num1;
    if(num1>0)sumG+=num1;
    else sumL+=num1;
    sumT+=num1;
    cout<<"Number 2: "<<endl;
    cin>>num2;
    if(num2>0)sumG+=num2;
    else sumL+=num2;
    sumT+=num2;
    cout<<"Number 3: "<<endl;
    cin>>num3;
    if(num3>0)sumG+=num3;
    else sumL+=num3;
    sumT+=num3;
    cout<<"Number 4: "<<endl;
    cin>>num4;
    if(num4>0)sumG+=num4;
    else sumL+=num4;
    sumT+=num4;
    cout<<"Number 5: "<<endl;
    cin>>num5;
    if(num5>0)sumG+=num5;
    else sumL+=num5;
    sumT+=num5;
    cout<<"Number 6: "<<endl;
    cin>>num6;
    if(num6>0)sumG+=num6;
    else sumL+=num6;
    sumT+=num6;
    cout<<"Number 7: "<<endl;
    cin>>num7;
    if(num7>0)sumG+=num7;
    else sumL+=num7;
    sumT+=num7;
    cout<<"Number 8: "<<endl;
    cin>>num8;
    if(num8>0)sumG+=num8;
    else sumL+=num8;
    sumT+=num8;
    cout<<"Number 9: "<<endl;
    cin>>num9;
    if(num9>0)sumG+=num9;
    else sumL+=num9;
    sumT+=num9;
    cout<<"Number 10: "<<endl;
    cin>>num10;
    if(num10>0)sumG+=num10;
    else sumL+=num10;
    sumT+=num10;
    //Output 
    cout<<"The sum of all the numbers greater than zero: "<<sumG<<endl;
    cout<<"The sum of all the numbers less than zero   : "<<sumL<<endl;
    cout<<"The sum of all the numbers                  : "<<sumT<<endl;
    //Exit stage right
    return 0;
}