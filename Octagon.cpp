#include <iostream>
using namespace std;

int main() {
   int numberOfSides;

   cin >> numberOfSides;

   if (numberOfSides == 8){
      cout << "Octagon" << endl;
   } else {
      cout << "Not an octagon" << endl;
   }

   return 0;
}