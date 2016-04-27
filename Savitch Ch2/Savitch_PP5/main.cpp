/* 
 * File:   main.cpp
 * Author: Branden Hitt
 *      Purpose: max room capacity
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
    unsigned short maxCap=0, numAtt=0; //maximum room capacity and number of attendees
    //Prompt the user for inputs
    cout<<"What is the maximum capacity of the room?"<<endl;
    cin>>maxCap;
    cout<<"What is the current expected number of attendees?"<<endl;
    cin>>numAtt;
    //Output 
    if(numAtt<=maxCap){
        cout<<"It is legal to hold the meeting."<<endl;
    }else{
        cout<<"The meeting cannot be held as planned as it does not meet fire regulations."<<endl;
        cout<<"You will need to remove "<<numAtt-maxCap<<" guests."<<endl;
    }
    
    return 0;
}