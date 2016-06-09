/* 
 * File:   main.cpp
 * Author: Branden Hitt
 *      Purpose: calculate the total grade for N classroom exercises as a percentage
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
    short numEx=0; //number of exercises
    short userS=0; //user scores
    short userT=0; //user total possible scores
    short temp=0; //temp placeholder
    float perc=0.0; //final percentage
    //Prompt the user for inputs
    cout<<"How many exercises were there:"<<endl;
    cin>>numEx;
    for(int i=1;i<=numEx;i++){
        cout<<"Enter in the score for exercise #"<<i<<endl;
        cin>>temp;
        userS+=temp;
        cout<<"Enter in the total possible score for exercise #"<<i<<endl;
        cin>>temp;
        userT+=temp;
        cout<<endl;
    }
    //Calculate
    perc=(userS/(userT *1.0f))*100;
    //Output 
    cout<<"Your total is "<<userS<<" out of "<<userT<<", or "<<perc<<"%"<<endl;
    //Exit stage right
    return 0;
}