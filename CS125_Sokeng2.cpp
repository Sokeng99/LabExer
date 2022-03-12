//Accept a temperature in Celsius and convert it to Kelvin and Fahrenheit
#include <iostream>                         // This is the directive for input and output stream
using namespace std;                        // Use standard namespace

//Written by Huot Sok Eng
int main()                                  // Main functon 
{                                           // To open the main function block
    double c1,k1,f1;                        // Declare c1, k1 and f1
    cout<<"Enter degrees in Celcius: ";     // Display Enter degrees in celcius:
    cin>>c1;                                // Input c1
    k1 = c1 + 273.15;                       // Formula of celcius converting to kelvin
    f1 = (c1 * 9/5) + 32;                   // Formula of celcius converting to fahrenheit
    cout<<"The value of " <<c1<< " degrees C in K is: " <<k1<<endl;     // Display the statement with an output k1
    cout<<"The value of " <<c1<< " degrees C in F is: " <<f1<<endl;     // Display the statement with an output f1
    return 0;                               // Return 0 to the OS
}                                           // To end the main function block
