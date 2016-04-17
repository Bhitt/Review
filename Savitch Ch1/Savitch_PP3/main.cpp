/* 
 * File:   main.cpp
 * Author: Branden Hitt
 *      Purpose: monetary value output in cents
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
    int nick=0,dime=0,quart=0, total=0;
    //Prompt the user for inputs
    cout<<"How many nickels do you have?"<<endl;
    cin>>nick;
    total+=nick*5;
    cout<<"How many dimes do you have?"<<endl;
    cin>>dime;
    total+=dime*10;
    cout<<"How many quarters do you have?"<<endl;
    cin>>quart;
    total+=quart*25;
    //Output 
    cout<<"You have a total of ("<<total<<") cents."<<endl;
    cout<<"Congrats on the wealth"<<endl;
    return 0;
}