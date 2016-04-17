/* 
 * File:   main.cpp
 * Author: Branden Hitt
 *      Purpose: write a program that reads in 2 integers and then outputs
 *              both their sum and product.
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
    int giv1=0, giv2=0, sum=0, prod=0;
    //Prompt the user for inputs
    cout<<"Purpose: Enter in 2 integers and this program will output the sum and product"<<endl;
    cout<<"Enter in your first integer now:"<<endl;
    cin>>giv1;
    cout<<"Now enter in your second integer:"<<endl;
    cin>>giv2;
    //Output 
    sum=giv1+giv2;
    prod=giv1*giv2;
    cout<<"Sum : "<<sum<<endl;
    cout<<"Product : "<<prod<<endl;
    //Exit stage right
    return 0;
}