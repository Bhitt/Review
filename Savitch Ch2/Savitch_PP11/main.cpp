/* 
 * File:   main.cpp
 * Author: Branden Hitt
 *      Purpose: take in input of a starting and ending temperature and display
 *               the temperature and corresponding velocity 
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
    float start=0,end=0;
    float vel=0;
    //Prompt the user for inputs
    cout<<"Input a starting temperature in Celsius:"<<endl;
    cin>>start;
    cout<<"Input an ending temperature in Celsius:"<<endl;
    cin>>end;
    //Output 
    for(start;start<=end;start++){
        //calc
        vel=331.3 + 0.61 *start;
        cout<<"At "<<start<<" degrees Celsius the velocity of sound is "<<vel<<" m/s"<<endl;
    }
    //Exit stage right
    return 0;
}