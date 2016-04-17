/* 
 * File:   main.cpp
 * Author: Branden Hitt
 *      Purpose: user inputs a character, program outputs large C composed of the input
 */

//System Libraries
#include <iostream>//I/O standard
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char user='o';
    //Prompt the user for inputs
    cout<<"Enter in a character:"<<endl;
    cin>>user;
    //Output 
    cout<<"         "<<user<<" "<<user<<" "<<user<<" "<<endl;
    cout<<"        "<<user<<"      "<<user<<endl;
    cout<<"       "<<user<<endl;
    cout<<"       "<<user<<endl;
    cout<<"       "<<user<<endl;
    cout<<"        "<<user<<"      "<<user<<endl;
    cout<<"         "<<user<<" "<<user<<" "<<user<<" "<<endl;
    return 0;
}