#include <iostream>
#include <cmath>

using namespace std;

double add(double num1, double num2) {
  return num1 + num2;
}

double Minus(double num1, double num2) {
  return num1 - num2;
}

double multiply(double num1, double num2) {
  return num1 * num2;
}

double divide(double num1, double num2) {
  if (num2 == 0) {
    cout << "Error: Cannot divide by zero." << endl;
    return 0;
  }
  return num1 / num2;
}

double Modulus(double num1, double num2) {
  if (num2 == 0) {
    cout << "Error: Cannot perform modulus by zero." << endl;
    return 0;
  }
}


int main() {
  while (true) {
    int Choice;
    cout << "Choose number of function you need\n";
    cout << "1- Add two numbers\n";
    cout << "2- Minus two numbers\n";
    cout << "3- Multiply two numbers\n";
    cout << "4- Divide two numbers\n";
    cout << "5- Modulus number\n";
    cout << "6- Add three numbers\n";
    cout << "7- Minus three numbers\n";
    cout << "0- Exit\n";
    cout << "Choice: ";
    cin >> Choice;

    switch (Choice) {
      case 1:
        double num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
        break;
      case 2:

        break;

      case 0:

        break;
      default:
        cout << "Wrong Choice" << endl;
    }

    if (Choice == 0) {
      break;
    }
  }

  cout << endl << "Thanks for using calculator" << endl;
  return 0;
}
