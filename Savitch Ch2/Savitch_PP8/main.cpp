/* 
 * File:   main.cpp
 * Author: Branden Hitt
 *      Purpose: find how many months to pay the loan and total interest amount paid
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
    short dur=0; //duration of payments
    float intP=0; //interest amount paid
    float cost=1000, intR=0.015; //stereo cost and interest rate (1.5% a month)
    float ded=0; //monthly deduction
    //Calculate the problem
    do{
       dur+=1; //increment month counter
       intP+=cost*intR;
       ded=50-(cost*intR);
       cout<<"Month: "<<dur<<endl;
       cout<<"  Balance: $"<<cost<<endl;
       cout<<"  Month Int: $"<<cost*intR<<endl;
       cout<<"  Deduction: $"<<ded<<endl;
       cost-=ded;
    }while(cost>49);
    if(cost>0){
       dur+=1; //increment month counter
       intP+=cost*intR;
       ded=cost+(cost*intR);
       cout<<"Month: "<<dur<<endl;
       cout<<"  Balance: $"<<cost<<endl;
       cout<<"  Month Int: $"<<cost*intR<<endl;
       cout<<"  Deduction: $"<<ded<<endl;
       cost-=cost; 
    }
    //Output 
    cout<<"You have purchased a stereo for $1,000 on a credit plan: 18% per year"<<endl;
    cout<<"It will take "<<dur<<" months to pay off the full amount."<<endl;
    cout<<"The full amount of interest paid will be $"<<intP<<endl;
    
    return 0;
}