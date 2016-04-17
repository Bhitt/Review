/* 
 * File:   main.cpp
 * Author: Branden Hitt
 *      Purpose: user inputs time in seconds, output how far the object free falls
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
    int fallT=0; //fall time
    float dist=0; //distance travelled
    //Prompt the user for inputs
    cout<<"How long would you like the object to freefall (in seconds)?"<<endl;
    cin>>fallT;
    //Output 
    dist=(32*(1.0f*fallT*fallT))/2.0f;
    cout<<"Your object fell "<<dist<<" feet over "<<fallT<<" seconds."<<endl;
    return 0;
}