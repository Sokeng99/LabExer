#include <iostream>

using namespace std;

void swap(int & a, int & b) {
    int temp = a;
    a = b;
    b = temp;
}

int main () {           //beginning scope of the main function
    int a = 2, b = 5;
    swap(a, b);
    cout << "a - " << a << " b - " << b;
}                       //Ending scope of the main function
