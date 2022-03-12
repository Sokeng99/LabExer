#include <iostream>
#include <limits>

using namespace std;

int main() {
    // 1. simple input
    // int num_1, num_2;

    // cin >> num_1;
    // cin >> num_2;

    // cin >> num_1 >> num_2;
    // cout << num_1 << " " << num_2 << '\n';

    // char c;
    // cin.get(c);
    // cout << c;

    // 2. using getline
    // string s;

    // cin >> s;
    // getline(cin, s, 'e');

    // char s[10];
    // cin.getline(s,10);

    // cout << s << '\n';

    // 3. trailing

    // string a, b;
    // cin >> a >> b;

    // getline(cin, a, '\n');
    // getline(cin, b, '\n');

    // cin >> a;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // cin >> b;
    // cout << a << b;

    // 4. validate

    // int a;
    // cin >> a;
    // if (cin.fail()) {
    //     cout << cin.fail() << '\n';
    // } 
    // else {
    //     cout << cin.fail() << '\n';
    //     cout << a << '\n';
    // }

    // int a;
    // while (!(cin >> a)) {
    //     cin.clear();
    //     cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // }
    // cout << a << '\n';

    int a;
    cin >> a;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> a;
    }
    cout << a << '\n';
}