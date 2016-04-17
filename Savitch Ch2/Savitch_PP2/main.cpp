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
    float prevSal=0; //previous salary
    const float payInc=0.076;
    float newAn=0,newSal=0,retPay=0;
    //Prompt the user for inputs
    cout<<"What was your previous annual salary?"<<endl;
    cin>>prevSal;
    //Calculate
    retPay=(prevSal*payInc); //retroactive pay
    newAn=prevSal+retPay; //new annual salary
    newSal=newAn/12;    //new monthly salary
    //Output
    
    cout<<"Your retro-active pay (6 months) : $"<<fixed<<setprecision(2)<<retPay/2<<endl;
    cout<<"Your new annual salary  : $"<<fixed<<setprecision(2)<<newAn<<endl;
    cout<<"Your new monthly salary : $"<<fixed<<setprecision(2)<<newSal<<endl;
    return 0;
}