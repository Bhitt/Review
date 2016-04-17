/* 
 * File:   main.cpp
 * Author: Branden Hitt
 *      Purpose: retroactive pay
 */

//System Libraries
#include <iostream>//I/O standard
#include <iomanip>// formatting
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int month=12;
    float prevSal=0; //previous salary
    const float payInc=0.076;
    float newAn=0,newSal=0,retPay=0;
    //Prompt the user for inputs
    cout<<"What was your previous annual salary?"<<endl;
    cin>>prevSal;
    cout<<"How many months of retro-active pay?"<<endl;
    cin>>month;
    //Calculate
    retPay=(prevSal*payInc); //retroactive pay
    newAn=prevSal+retPay; //new annual salary
    newSal=newAn/12;    //new monthly salary
    //Output
    cout<<"Your retro-active pay ("<<month<<" months) : $"<<fixed<<setprecision(2)<<retPay/(12/month)<<endl;
    cout<<"Your new annual salary  : $"<<fixed<<setprecision(2)<<newAn<<endl;
    cout<<"Your new monthly salary : $"<<fixed<<setprecision(2)<<newSal<<endl;
    return 0;
}