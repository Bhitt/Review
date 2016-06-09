/* 
 * File:   main.cpp
 * Author: Branden Hitt
 *      Purpose: calculate and output linear displacement
 */

//System Libraries
#include <iostream>//I/O standard
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float coef=2.31 * (pow(10,-5)); //coefficient for linear expansion
    float displ=0; //displacement in meters
    float changeT=0; //change in temperature in Celsius
    float lenM=0; //length of material in meters
    //Prompt the user for inputs
    cout<<"We are going to calculate and output the linear displacement"<<endl;
    cout<<"of an aluminum bar."<<endl;
    cout<<"First, input the initial length in meters:"<<endl;
    cin>>lenM;
    cout<<"Second, input the change in temperature in Celsius:"<<endl;
    cin>>changeT;
    //Calculate
    displ= coef*lenM*changeT;
    //Output 
    if(displ<0){
        cout<<"The material will contract by "<<(displ*(-1))<<" meters."<<endl;
    }else{
        cout<<"The material will expand by "<<displ<<" meters."<<endl;
    }
    //Exit stage right
    return 0;
}