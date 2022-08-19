#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <ctime>
#include <string>
#include <vector>

using namespace std;
#define PI 3.14159265

ofstream mytable;
//Create Class Function to access each sub-function
class Function
{
    public:

        void printAngles(double a, double b, double c)
        {

            char choice;
            double n, n1, A1, B1, C1;
            vector<double> myvector;
            double x = double(a);
            double y = double(b);
            double z = double(c);
            double A = double(acos(((y * y) + (z * z) - (x * x)) / (2 * y * z)) * 180 / PI);
            double B = double(acos(((x * x) + (z * z) - (y * y)) / (2 * x * z)) * 180 / PI);

        menu1:
            cout << "Which angle of degree would you like to calculate?" << endl;
            cout << "A = " << A << ", B = " << B << ", C = 90" << endl;
            cin >> choice;

            switch (choice)
            {
            case 'A':
            case 'a':

            {
                double A1 = A * PI / 180;
                myvector.push_back (b);
                myvector.push_back (a);
                myvector.push_back (A);
                myvector.push_back (B);
                myvector.push_back (90);
                myvector.push_back (sin(A1));
                myvector.push_back (cos(A1));
                myvector.push_back (tan(A1));
                
                for (auto it = myvector.begin(); it != myvector.end(); ++it)
                    cout << "Your output is -> " << *it<<endl;

                mytable.open("trig2.txt", ios::app);
                mytable << endl
                        << endl;
                ;
                // Current date and time
                time_t now = time(0);
                char *date_time = ctime(&now);
                mytable << "Date and Time of Execution: " << date_time << endl;

                // Main table
                mytable << "+------------+---------------+---------------+------------------------------------+------------------+------------------+------------------+" << endl;
                mytable << "| Hypotenuse | Opposite Side | Adjacent Side |          Angle in Degrees          |       Sin(A)     |      Cos(A)      |      Tan(A)      |" << endl;
                mytable << "+------------+---------------+---------------+------------------------------------+------------------+------------------+------------------+" << endl; 
                mytable << "|" << setw(7) << c;
                mytable << setw(5) << " ";
                mytable << "|" << setw(8) << b;
                mytable << setw(7) << " ";
                mytable << "|" << setw(10) << a;
                mytable << setw(5) << " ";
                mytable << "|" << setw(6) << "A = " << A << ", B = " << B << ", C = 90";
                mytable << setw(2) << " ";
                mytable << "|" << setw(14) << sin(A1);
                mytable << setw(4) << " ";
                mytable << "|" << setw(14) << cos(A1);
                mytable << setw(4) << " ";
                mytable << "|" << setw(14) << tan(A1);
                mytable << setw(4) << " ";
                mytable << "|" << endl;
                mytable << "+------------+---------------+---------------+------------------------------------+------------------+------------------+------------------+" << endl;
                mytable.close();
                system("notepad trig2.txt");
                break;
            }
            case 'B':
            case 'b':

            {
                double B1 = B * PI / 180;
                myvector.push_back (b);
                myvector.push_back (a);
                myvector.push_back (A);
                myvector.push_back (B);
                myvector.push_back (90);
                myvector.push_back (sin(B1));
                myvector.push_back (cos(B1));
                myvector.push_back (tan(B1));
            
                for (auto it = myvector.begin(); it != myvector.end(); ++it)
                    cout << "Your output is -> " << *it<<endl;
                mytable.open("trig2.txt", ios::app);
                mytable << endl
                        << endl;
                ;
                // Current date and time
                time_t now = time(0);
                char *date_time = ctime(&now);
                mytable << "Date and Time of Execution: " << date_time << endl;
                // Main table
                mytable << "+------------+---------------+---------------+------------------------------------+------------------+------------------+------------------+" << endl;
                mytable << "| Hypotenuse | Opposite Side | Adjacent Side |          Angle in Degrees          |       Sin(B)     |      Cos(B)      |      Tan(B)      |" << endl;
                mytable << "+------------+---------------+---------------+------------------------------------+------------------+------------------+------------------+" << endl;
                mytable << "|" << setw(7) << c;
                mytable << setw(5) << " ";
                mytable << "|" << setw(8) << b;
                mytable << setw(7) << " ";
                mytable << "|" << setw(10) << a;
                mytable << setw(5) << " ";
                mytable << "|" << setw(6) << "A = " << A << ", B = " << B << ", C = 90";
                mytable << setw(2) << " ";
                mytable << "|" << setw(14) << sin(B1);
                mytable << setw(4) << " ";
                mytable << "|" << setw(14) << cos(B1);
                mytable << setw(4) << " ";
                mytable << "|" << setw(14) << tan(B1);
                mytable << setw(4) << " ";
                mytable << "|" << endl;
                mytable << "+------------+---------------+---------------+------------------------------------+------------------+------------------+------------------+" << endl;
                mytable.close();
                system("notepad trig2.txt");
                break;
            }
            case 'C':
            case 'c':

            {
                double C1 = 90 * PI / 180;
                myvector.push_back (b);
                myvector.push_back (a);
                myvector.push_back (A);
                myvector.push_back (B);
                myvector.push_back (90);
                myvector.push_back (sin(C1));
                myvector.push_back (cos(C1));
                myvector.push_back (tan(C1));
        
                for (auto it = myvector.begin(); it != myvector.end(); ++it)
                    cout << "Your output is -> " << *it<<endl;
                mytable.open("trig2.txt", ios::app);
                mytable << endl
                        << endl;
                ;
                // Current date and time
                time_t now = time(0);
                char *date_time = ctime(&now);
                mytable << "Date and Time of Execution: " << date_time << endl;

                // Main table

                mytable << "+------------+---------------+---------------+------------------------------------+------------------+------------------+------------------+" << endl;
                mytable << "| Hypotenuse | Opposite Side | Adjacent Side |          Angle in Degrees          |       Sin(C)     |      Cos(C)      |      Tan(C)      |" << endl;
                mytable << "+------------+---------------+---------------+------------------------------------+------------------+------------------+------------------+" << endl;
                mytable << "|" << setw(7) << c;
                mytable << setw(5) << " ";
                mytable << "|" << setw(8) << b;
                mytable << setw(7) << " ";
                mytable << "|" << setw(10) << a;
                mytable << setw(5) << " ";
                mytable << "|" << setw(6) << "A = " << A << ", B = " << B << ", C = 90";
                mytable << setw(2) << " ";
                mytable << "|" << setw(14) << sin(C1);
                mytable << setw(4) << " ";
                mytable << "|" << setw(14) << cos(C1);
                mytable << setw(4) << " ";
                mytable << "|" << setw(14) << "Undefined";
                mytable << setw(4) << " ";
                mytable << "|" << endl;
                mytable << "+------------+---------------+---------------+------------------------------------+------------------+------------------+------------------+" << endl;
                mytable.close();
                system("notepad trig2.txt");
                break;
            }
            default:
            {
                cout << "Incorrect Input." << endl;
                goto menu1;
            }
            }

        }
        void printOtherSides(int n)
        {
            double a, b;
            if (n > 2)
            {
                // if n is odd
                if (n & 1)
                {
                    a = 2 * (sqrt(n - 1));
                    b = n - 2;
                }

                // if n is even
                else
                {

                    a = 2 * (sqrt(n - 1));
                    b = n - 2;
                }

                printAngles(a, b, n);
            }
        }
        
        void onlyDegree(float d)
        {
            double rad;
            float sine, cosine, tangent;
            vector<double> myvector;
            rad = d * PI / 180;
            sine = sin(rad);
            cosine = cos(rad);
            tangent = tan(rad);

            if (sine >= -1.0 || sine <= 1.0)
            {
                sine = sine;
            }

            if (cosine >= -1.0 || cosine <= 1.0)
            {
                cosine = cosine;
            }

            for (int i = 1; i <= 10; i += 2)
            {
                if (d != i * 90)
                {
                    tangent = tangent;
                }
            }

            mytable.open("trig2.txt", ios::app);
            mytable << endl
                    << endl;

            myvector.push_back (sine);
            myvector.push_back (cosine);
            myvector.push_back (tangent);
            for (auto it = myvector.begin(); it != myvector.end(); ++it)
                cout << "Your output is -> " << *it<<endl;

            // Current date and time
            time_t now = time(0);
            char *date_time = ctime(&now);
            mytable << "Date and Time of Execution: " << date_time << endl;
            mytable << "+------------------------------------+------------------+------------------+------------------+" << endl;
            mytable << "|          Angle in Degrees          |      Sin(D)      |      Cos(D)      |       Tan(D)     |" << endl;
            mytable << "+------------------------------------+------------------+------------------+------------------+" << endl;
            mytable << "|" << setw(18) << d;
            mytable << setw(18) << " ";
            mytable << "|" << setw(14) << sine;
            mytable << setw(4) << " ";
            mytable << "|" << setw(14) << cosine;
            mytable << setw(4) << " ";
            mytable << "|" << setw(14) << tangent;
            mytable << setw(4) << " ";
            mytable << "|" << endl;
            mytable << "+------------------------------------+------------------+------------------+------------------+" << endl;
            mytable.close();
            system("notepad trig2.txt");
    }
};

int main()
{
    try
    {
        int choice;
        Function obj1;
    menu:
        cout << "Please select option: " << endl;
        cout << "[1] Input a length of Hypotenuse to calculate others 2 sides & Angles" << endl;
        cout << "[2] Input an angle in degree to calculate sine, cosine and tangent of the angle" << endl;
        cout << "Enter your input here -> ";
        cin >> choice;
        if (choice == 1)
        {
            // Implement STL
            vector<int> myvector;
            int c;
            cout << "Enter a length of Hypotenuse: ";
            cin >> c;
            myvector.push_back (c);
            for (auto it = myvector.begin(); it != myvector.end(); ++it)
                cout << "Your input is -> " << *it<<endl;
                if (c <= 2)
                {
                    throw -1;
                }
                    obj1.printOtherSides(c);
          
        }
        else if (choice == 2)
        {
            vector<double> myvector;
            double degree;
            cout << "Enter degree: ";
            cin >> degree;
            if (cin.fail())
            {
                cout << "Wrong input.";
                return EXIT_SUCCESS;
            }
            myvector.push_back(degree);
            for (auto it = myvector.begin(); it != myvector.end(); ++it)
                cout << "Your input is -> " << *it << endl;
            obj1.onlyDegree(degree);
        }
        else
            cout << "Incorrect input. Choose either 1 or 2.";
        return EXIT_SUCCESS;
    }
    catch (int x)
    {
        mytable.open("trig2.txt", ios::app);
        mytable << endl
                << endl;
        time_t now = time(0);
        char *date_time = ctime(&now);
        mytable << "Date and Time of Execution: " << date_time << endl;

        cout << x << endl;
        cout << "The length of Hypotenuse should be greater than 2." << endl;
        mytable << x << endl;
        mytable << "The length of Hypotenuse should be greater than 2." << endl;
        mytable.close();
        mytable.close();
        system("notepad trig2.txt");
    }
    return 0;
}