// Using a switch statement, write a program to compile all laboratory activities
#include <iostream>
#include <ctype.h>
#include <conio.h>
using namespace std;

//Written by Sok Eng Huot
int main() {
  int n1, count = 0; // Variable in Lab3               
  string name; // Variable in Lab3
  float temp; // Variable in Lab4
  int num1; // Variable in Lab5                   
  int count1 = 0; // Variable in Lab5                                             
  double numb1; // Variable in Lab6
  int A = 0, B = 0, C = 0, D = 0, F = 0, Total_Num = 0; // Variable in Lab6

//Give q a function of main menu
q:
  cout << "\t MAIN MENU\n";
  cout << "[1] On Arithmetic Operators and Keyboard Input\n";
  cout << "[2] On Arithmetic Operators\n";
  cout << "[3] On Even and odd numbers\n";
  cout << "[4] On Temperature based on the range that are given\n";
  cout << "[5] On Prime and composite numbers\n";
  cout << "[6] On while or do-while loop\n";
  cout << "[7] On Switch statement\n";
  cout << "[X] To Exit/Stop \n";

  // Variable in Lab7
  char number;
  char chara;
  char loop;
  cout << "Your Choice: ";
  cin >> number;

  do {
    if (number == 'X' || number == 'x') {
      break;
    } else {
      switch (toupper(number)) {
      case '1':
        cout << "On Arithmetic Operators and Keyboard Input\n";
        int x, y, z, sum, ave, product;
        cout << "Enter First number: ";
        cin >> x;
        cout << "Enter Second number: ";
        cin >> y;
        cout << "Enter Third number: ";
        cin >> z;
        sum = x + y + z;
        ave = sum / 3;
        product = x * y * z;
        cout << "The sum of " << x << " , " << y << " and " << z << " is " << sum << endl;
        cout << "The average of " << x << " , " << y << " and " << z << " is " << ave << endl;
        cout << "The product of " << x << " , " << y << " and " << z << " is " << product << endl;
        break;

      case '2':
        cout << "These programs to accecpt r and convert to Area and Circumference & Temperature conversion\n";
        cout << "\t SUB MENU\n";
        cout << "[1] Circumference and Area\n";
        cout << "[2] Temperature Conversion\n";
        cout << "[M] Go back to the main menu\n";
        cout << "Your Choice: ";
        cin >> chara;
        do {
          if (chara == 'M' || chara == 'm')
          {
              goto q;
          } else {
          switch (toupper(chara)) {
          case '1':
            cout << "Circumference and Area\n";
            #define PI 3.14 // Direct or define fixed value to PI
            float r, a, circ; // Declare variables: radius, area and circumference
            cout << "Enter radius: "; // Display of Enter radius
            cin >> r; // Input r
            a = PI * r * r; // Area's circle formula
            circ = 2 * PI * r; // Circumference's circle formula
            cout << "The area of the circle is: " << a << endl; // Display the statement with an output a
            cout << "The circumference of the circle is: " << circ << endl; // Display the statement with an output circ                                                        
            break;

          case '2':
            cout << "Temperature Conversion\n";
            double c1, k1, f1; // Declare c1, k1 and f1
            cout << "Enter degrees in Celcius: "; // Display Enter degrees in celcius:
            cin >> c1; // Input c1
            k1 = c1 + 273.15; // Formula of celcius converting to kelvin
            f1 = (c1 * 9 / 5) + 32; // Formula of celcius converting to fahrenheit
            cout << "The value of " << c1 << " degrees C in K is: " << k1 << endl; // Display the statement with an output k1
            cout << "The value of " << c1 << " degrees C in F is: " << f1 << endl; // Display the statement with an output f1
            break;

          default:
            cout << "Invalid Value\n"; //Invalid, press any Key to continue
            //cin.get(loop);
            getch();
            break;
          }
          }
          cout << "Press any Key to continue...\n";
          //cin >> loop;
          getch();
          cout << "\t SUB MENU\n";
          cout << "[1] Circumference and Area\n";
          cout << "[2] Temperature Conversion\n";
          cout << "[M] Go back to the main menu\n";
          cout << "Your Choice: ";
          cin >> chara;
        } while (true); //While function true then it starts repeating again 
        break;

      case '3':
        cout << "If odd numbers, Print name 5 times else Print nmae 10 times\n";
        cout << "Enter Age: "; // Output Enter Age
        cin >> n1; // Input your age
        cout << "Enter Name: "; // Output Enter Name
        getline(cin >> ws, name); // Input your name
        if (n1 % 2 == 0) // Comment about the if function
        { // To open the if function block
          while (count < 10) // Comment about while function
          { // To open the while function block
            count++; // Increment by 1 
            cout << name << endl; // Output your name here
          } // To end the while function block
        } // To end the if function block
        else // Comment else function
        { // To open the else function block
          while (count < 5) // Comment about while function
          { // To open the while func block
            count++; // Increment by 1
            cout << name << endl; // Output your name
          } // To close the while func block
        }
        break;

      case '4':
        cout << "Enter the temperature and display the following messages based on the range\n";
        cout << "Enter Temperature: "; // Output Enter Temperature
        cin >> temp; // Input temp

        if (cin.fail()) // If the user input words, display input is invalid
        {
          cout << "Input is invalid";
        } else if (temp >= 41 and temp <= 54) // If the input between 41 and 54, display stay hydrated!
        {
          cout << "Stay hydrated!";
        } else if (temp >= 32 and temp <= 40) // If the input between 32 and 40, display stay Cool and safe!
        {
          cout << "Stay Cool and safe!";
        } else if (temp >= 26 and temp <= 31) // If the input between 26 and 31, display Keep a sunblock handy!
        {
          cout << "Keep a sunblock handy!";
        } else if (temp >= 20 and temp <= 25) // If the input between 20 and 25, display Always keep your cool!
        {
          cout << "Always keep your cool!";
        } else if (temp >= 54) // If the input is greater 54, display Values input is out of range
        {
          cout << "Values input is out of range";
        } else // If the input less than 20, display Cool breeze in the air!
        {
          cout << "Cool breeze in the air!";
        }
        break;

      case '5':
        cout << "On Prime and composite numbers\n";
        cout << "Enter a number: ";
        cin >> num1;
        for (int i = 1; i <= num1; i++) // Initialize i from 1, for i <= num and if true, increment i by 1 until it meets condition
        {
          if (num1 % i == 0) // If condition for num divide by i give remainder 0
          {
            count1++; // If true, increment count by 1
          }
        }
        if (count1 == 2) // If condition for count is equal to 2
        {
          cout << num1 << " is a prime number"; // Output <<num<< is a prime number
        } else if (num1 == 0 or num1 == 1) // else if condition num = 0 or 1   
        {
          cout << num1 << " is neither a prime nor composite number"; // Display <<num<< is neither a prime nor composite number
        } else // else condition
        {
          cout << "The factors of " << num1 << " are: "; // Output The factors of <<num<< are
          for (int a = 1; a <= num1; a++) // Initialize a from 1, for a <= num and if true, increment a by 1 until it meets condition                        
          {
            if (num1 % a == 0) // If condition for num divide by a give remainder 0
            {
              cout << a << " , "; // Output n1, n2 , ... , num
            }
          }
        }
        break;

      case '6':
        cout << "Using while to program to read a list of exam scores and display the total number of grades\n";
        cout << "Enter Exam scores: "; // Enter num from 0 -> 100, to stop accecpting input put negative number at the end
        cin >> numb1;
        while (numb1 > 0) // While num is bigger than 0
        {
          if (numb1 >= 90 && numb1 <= 100) // If num is between the interval, A++
          {
            A++;
          } else if (numb1 >= 80 && numb1 <= 89) // If num is between the interval, B++
          {
            B++;
          } else if (numb1 >= 70 && numb1 <= 79) // If num is between the interval, C++
          {
            C++;
          } else if (numb1 >= 60 && numb1 <= 69) // If num is between the interval, D++
          {
            D++;
          } else if (numb1 >= 0 && numb1 <= 59) // If num is between the interval, F++
          {
            F++;
          }
          cin >> numb1; // Loop input until it does not meet the condition
          Total_Num = A + B + C + D + F; //  Keep increment by 1 when we input the num
        }
        cout << "Number of A's: " << A << endl;
        cout << "Number of B's: " << B << endl;
        cout << "Number of C's: " << C << endl;
        cout << "Number of D's: " << D << endl;
        cout << "Number of F's: " << F << endl;
        cout << "Total Number of Scores: " << Total_Num << endl;
        break;

      case '7':
        cout << "Using a switch statement, write a program to compile all laboratory activities\n";
        break;

      default:
        cout << "Invalid Value\n";
        //cin.get(loop);
        getch();
        break;
      }


      cout << "\nPress any key to continue...\n";
      //cin >> loop;
      getch();
      cout << "\tMAIN MENU\n";
      cout << "[1] On Arithmetic Operators and Keyboard Input\n";
      cout << "[2] On Arithmetic Operators\n";
      cout << "[3] On Even and odd numbers\n";
      cout << "[4] On Temperature based on the range that are given\n";
      cout << "[5] On Prime and composite numbers\n";
      cout << "[6] On while or do-while loop\n";
      cout << "[7] On Switch statement\n";
      cout << "[X] To Exit/Stop \n";
      cout << "Your Choice: ";
      cin >> number;
    }
     } while (true);
    cout << "Thank you for using Sok Eng's Program :))";
  return 0;
}