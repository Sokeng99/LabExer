//Accept three numbers and display the sum, product, and average.
#include <iostream>
using namespace std;

int main() 
{
    int x, y, z, sum, ave, product;
    cout<<"Enter First number: ";
    cin>>x;
    cout<<"Enter Second number: ";
    cin>>y;
    cout<<"Enter Third number: ";
    cin>>z;
    sum = x+y+z;
    ave = sum/3;
    product = x*y*z;
    cout<<"The sum of " <<x<< " , " <<y<< " and " <<z<< " is "<<sum<<endl;
    cout<<"The average of " <<x<< " , " <<y<< " and " <<z<< " is "<<ave<<endl;
    cout<<"The product of " <<x<< " , " <<y<< " and " <<z<< " is "<<product<<endl;
    return 0;
}
