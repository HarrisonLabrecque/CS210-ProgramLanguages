#include <iostream>
using namespace std;

int main() {
   bool isTeenager; // Declare a boolean variable to store whether the person is a teenager
   int kidAge; // Declare an integer variable to store the age

   cin >> kidAge; // Prompt user to enter the age and store it in kidAge

   // Check if the age is between 13 and 19 (inclusive)
   if (kidAge >= 13 && kidAge <= 19) {
      isTeenager = true; // Set isTeenager to true if the age is within the teenager range
   }
   else {
      isTeenager = false; // Set isTeenager to false if the age is outside the teenager range
   }

   // Output whether the person is a teen or not based on the boolean value of isTeenager
   if (isTeenager) {
      cout << "Teen" << endl; // Print "Teen" if isTeenager is true
   }
   else {
      cout << "Not teen" << endl; // Print "Not teen" if
