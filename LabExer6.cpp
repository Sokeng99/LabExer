//Using while or while-loop to write a program to read a list of exam scores and display the total number of grades
#include <iostream>
using namespace std;

//Written by Sok Eng Huot
int main()
{
    double num;
    int A = 0, B = 0, C = 0, D = 0, F = 0, Total_Num = 0;
    cout<<"Enter Exam scores: ";            // Enter num from 0 -> 100, to stop accecpting input put negative number at the end
    while(num>0)                            // While num is bigger than 0
    {
    if (num >= 90 && num <= 100)            // If num is between the interval, A++
    {
        A++;
    }
    else if (num >= 80 && num <= 89)        // If num is between the interval, B++
    {
        B++;
    }
    else if (num >= 70 && num <= 79)        // If num is between the interval, C++
    {
        C++;
    }
    else if (num >= 60 && num <= 69)        // If num is between the interval, D++
    {
        D++;
    }
    else if (num >= 0 && num <= 59)         // If num is between the interval, F++
    {
        F++;
    }
        cin>>num;                           // Loop input until it does not meet the condition
        Total_Num++;                        //  Keep increment by 1 when we input the num
    }    
    cout<< "Number of A's: " << A << endl;
    cout<< "Number of B's: " << B << endl;
    cout<< "Number of C's: " << C << endl;
    cout<< "Number of D's: " << D << endl;
    cout<< "Number of F's: " << F << endl;
    cout<< "Total Number of Scores: " << Total_Num << endl;
    return 0;
}