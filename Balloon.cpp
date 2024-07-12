#include <iostream>
using namespace std;

int main() {
   bool isRed; // Declare a boolean variable to store whether the object is red
   bool isBalloon; // Declare a boolean variable to store whether the object is a balloon

   cin >> isRed; // Prompt user to enter a boolean value for isRed
   cin >> isBalloon; // Prompt user to enter a boolean value for isBalloon

   // Check conditions based on the values of isRed and isBalloon
   if (isBalloon == true && isRed == false) {
      cout << "Balloon" << endl; // If isBalloon is true and isRed is false, print "Balloon"
   }
   else if (isBalloon == true && isRed == true) {
      cout << "Red balloon" << endl; // If isBalloon is true and isRed is true, print "Red balloon"
   }
   else {
      cout << "Not a balloon" << endl; // If isBalloon is false, print "Not a balloon"
   }

   return 0; // Return 0 to indicate successful execution
}
