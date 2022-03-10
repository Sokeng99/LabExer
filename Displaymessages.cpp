//CAP to accept the current temperature and display the following messages based on
//the range gven on the table below

#include <iostream>                         // This is the directive for input and output stream
using namespace std;                        // Use standard namespace

// Written by Huot Sok Eng 
int main()                                  // Main function
{                                           // To open the main function block
    float temp;                             
    cout<<"Enter Temperature: ";
    cin>>temp;
    
    if (cin.fail())                         // If the user input words, display input is invalid
    {
        cout<<"Input is invalid";
    }
    else if (temp > 41 and temp <= 54)      // If the input between 41 and 54, display stay hydrated!
    {
        cout<<"Stay hydrated!";
    }
    else if (temp > 32 and temp <= 40)      // If the input between 32 and 40, display stay Cool and safe!
    {
        cout<<"Stay Cool and safe!";
    }
    else if (temp > 26 and temp <= 31)      // If the input between 26 and 31, display Keep a sunblock handy!
    {
    cout<<"Keep a sunblock handy!";
    } 
    else if (temp > 20 and temp <= 25)      // If the input between 20 and 25, display Always keep your cool!
    {
        cout<<"Always keep your cool!";
    }
    else if (temp > 54)                     // If the input is greater 54, display Values input is out of range
    {
        cout<<"Values input is out of range";
    }
    else                                    // If the input less than 20, display Cool breeze in the air!
    {
        cout<<"Cool breeze in the air!";
    }
    return 0;                               // Return 0 to the OS
}                                           // To end the main function block
