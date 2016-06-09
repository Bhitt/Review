/* 
 * File:   main.cpp
 * Author: Branden Hitt
 *      Purpose: find how many chocolate bars the user should eat to maintain their weight
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
    float barCal = 230; // number of calories in a bar
    float userW = 0; //user weight in pounds
    short userH = 0; //user height in inches
    short userA= 0; //user age in years
    char gender = 'M'; //user gender
    float bmr = 0; //basal metabolic rate
    float amountB = 0; //amount of bars to be eaten
    //Prompt the user for inputs
    cout<<"This program will find how many chocolate bars you need to eat to"<<endl;
    cout<<"maintain your weight."<<endl;
    cout<<"What is your weight in pounds:"<<endl;
    cin>>userW;
    cout<<"What is your height in inches:"<<endl;
    cin>>userH;
    cout<<"What is your age in years:"<<endl;
    cin>>userA;
    cout<<"Are you male or female? Enter M for male or F for female:"<<endl;
    cin>>gender;
    //Calculate
    if(gender == 'm' || gender == 'M'){ //if male
        bmr = 66 + (6.3 * userW) + (12.9 * userH) - (6.8 * userA);
    }else{ //if female
        bmr = 655 + (4.3 * userW) + (4.7 * userH) - (4.7 * userA);
    }
    amountB = bmr / barCal;
    //Output number of bars the user should eat to maintain their weight.
    cout<<"The amount of bars you need to eat is "<<amountB<<" bars."<<endl;
    //Exit stage right
    return 0;
}