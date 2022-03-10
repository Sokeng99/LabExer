
#include <iostream>                         // This is the directive for input and output stream
using namespace std;                        // Use standard namespace

// Written by Huot Sok Eng 
int main()                                  // Main function
{                                           // To open the main function block
    int n1;                                 // Declare n1
    int count = 0;                          // Declare and initialize count = 0
    string name;                            // Declare name
    cout<<"Enter Age: ";                    // Output Enter Age
    cin>>n1;                                // Input your age
    cout<<"Enter Name: ";                   // Output Enter Name
    cin>>name;                              // Input  your name
    if (n1 % 2 == 0)                        // Comment about the if function
    {                                       // To open the if function block
        while (count<10)                    // Comment about while function
        {                                   // To open the while function block
            count++;                        // Increment by 1 
            cout<<name<<endl;               // Output your name here
        }                                   // To end the while function block
    }                                       // To end the if function block
    else                                    // Comment else function
    {                                       //
        while (count<5)                     //
        {                                   //
            count++;                        //
            cout<<name<<endl;               //
        }                                   //
    }                                       // 
    return 0;                               // Return 0 to the OS
}                                           // To end the main function block
