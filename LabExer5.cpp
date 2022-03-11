// CAP to accept a number & display if a prime or composite number.
// If composition, display factors
#include <iostream>                     // This is the directive for input and output stream 
using namespace std;                    // Use standard namespace

//Written by: Huot Sok Eng
int main()                              // Main function
{                                       
    int num;                            // Declare variable num
    int count = 0;                      // Declare and initialize count from 0
    cout<<"Enter a number: ";
    cin>>num;
    for (int i = 1; i<=num; i++)        // Initialize i from 1, for i <= num and if true, increment i by 1 until it meets condition
    {
    if (num % i == 0)                   // If condition for num divide by i give remainder 0
        {
            count++;                    // If true, increment count by 1
        }
    }
    if (count == 2)                     // If condition for count is equal to 2
        {
            cout<< num <<" is a prime number";          // Output <<num<< is a prime number
        }
    else if (num == 0 or num == 1)      // else if condition num = 0 or 1   
    {
        cout<< num <<" is neither a prime nor composite number";        // Display <<num<< is neither a prime nor composite number
    }
    else                                // else condition
    {
        cout<<"The factors of " << num << " are: ";      // Output The factors of <<num<< are
        for(int a=1; a <= num; a ++)     // Initialize a from 1, for a <= num and if true, increment a by 1 until it meets condition                        
        {
        if( num % a == 0)                // If condition for num divide by a give remainder 0
        {
        cout<< a << " , ";               // Output n1, n2 , ... , num
        }
        }
    }
    return 0;                            // Return 0 to the OS
}