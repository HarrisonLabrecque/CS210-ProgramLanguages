#include <iostream>
using namespace std;

int main() {
   int numberOfSides;

   cin >> numberOfSides;

   if (numberOfSides == 5) {
      cout << "Pentagon" << endl;
   } else if (numberOfSides == 6) {
      cout << "Hexagon" << endl;
   } else {
      cout <<  "Unexpected polygon" << endl;
   }

   return 0;
}