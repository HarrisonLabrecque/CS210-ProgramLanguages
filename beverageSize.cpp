#include <iostream>
using namespace std;

int main() {
   int beverageSize;

   cin >> beverageSize;

   if (beverageSize < 7) {
      cout << "Too small" << endl;
   } else if (beverageSize >= 7 && beverageSize < 17) {
      cout <<  "Satisfactory" << endl;
   } else if (beverageSize >= 17) {
      cout << "Too large" << endl;
   }

   return 0;
}