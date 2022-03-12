#include <iostream>
#include <limits>

using namespace std;

void input(float & num) {
    cout << "Enter a number: ";
    cin >> num;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "~Please Enter an Integer~\n";
        cin >> num;
    }
}
void input(char & c) {
    cout << "Enter [+, -, /, *]: ";
    cin >> c;
    while (cin.fail() || (c != '+' && c != '-' && c != '/' && c != '*')) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "~Please Enter [+, -, /, *]~\n";
        cin.get(c);
    }
}

float result(float num_1, float num_2, char op) {
    switch (op) {
        case '+':
            return num_1 + num_2;
        case '-':
            return num_1 - num_2;
        case '*':
            return num_1 * num_2;
        case '/':
            return num_1 / num_2;
        default:
            return -1;
    }
}

int main() 
{
    float num_1, num_2;
    char fnct;
    input(num_1);
    input(num_2);
    input(fnct);
    cout << result(num_1, num_2, fnct);
}