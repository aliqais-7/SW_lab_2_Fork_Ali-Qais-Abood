#include <iostream>
using namespace std;

int main() {
// Define variables for the two input numbers, and for the resulting sum, sub, mul, division, and average.
   float num1, num2, sum, sub, mul, division, average;

// Ask the user to enter two numbers, and read them from the console.
   cout << "Enter two numbers: ";
   cin >> num1 >> num2;

   sum = num1 + num2;
   sub = num1 - num2;
   mul = num1 * num2;
   division = num1 / num2;
   average = (num1 + num2) / 2;
// ali mohammed jawad
   cout << "Sum = " << sum << endl;
   cout << "Sub = " << sub << endl;
   cout << "mul = " << mul << endl;
   cout << "division = " << division << endl;
   cout << "Average = " << average << endl;

   return 0;

   
}
