/* 
 * File:   main.cpp
 * Author: Branden Hitt
 *      Purpose: 
 */

//System Libraries
#include <iostream>//I/O standard
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    char repeat='n';
    do{
        //Declare Variables
        short depend=0; //dependants
        short hrsW=0; //hours worked
        float netPay=0; //net pay
        float payR=16.78; //pay rate
        float gross=0; //gross pay
        float socS=0; //social security amount withheld
        float fedI=0; //federal income tax
        float staI=0; //state income tax
        //Prompt the user for inputs
        cout<<"How many hours have you worked in a week?"<<endl;
        cin>>hrsW;
        cout<<"How many dependants do you have?"<<endl;
        cin>>depend;
        //calculate gross
        if(hrsW>40){
            gross=payR*40;
            gross+= (payR*(hrsW-40)*1.5f);
        }else{
            gross=payR*hrsW;
        }
        //calculate social security
        socS=gross*0.06;
        //calculate federal income tax
        fedI=gross*0.14;
        //calculate state income tax
        staI=gross*0.05;
        //withholdings
        netPay=gross-10-socS-fedI-staI;
        if(depend>2) netPay-=35;
        //Output gross pay
        cout<<endl;
        cout<<"Gross Pay         : $"<<fixed<<setprecision(2)<<gross<<endl;
        //output withholding amounts
        cout<<"Social Security   : $"<<socS<<endl;
        cout<<"Federal Income Tax: $"<<fedI<<endl;
        cout<<"State Income Tax  : $"<<staI<<endl;
        cout<<"Union Dues        : $10.00"<<endl;
        if(depend>2)cout<<"Health Insurance  : $35.00"<<endl;
        //output net take home pay
        cout<<"Net Pay           : $"<<netPay<<endl;
        //prompt for repeat
        cout<<endl;
        cout<<"If you would like to repeat then enter in 'Y' now. Otherwise, "<<endl;
        cout<<"enter in 'N'"<<endl;
        cin>>repeat;
        cout<<endl;
    }while(repeat=='y'||repeat=='Y');
    //exit stage right
    return 0;
}