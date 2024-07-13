#include <iostream>
using namespace std;

int main() {
   int numPatrons;

   cin >> numPatrons;

   if (numPatrons > 7){
      cout << "Must split group" << endl;
   } else if (numPatrons >= 5 && numPatrons <= 7) {
      cout << "Big table" << endl;
   } else if (numPatrons >= 1 && numPatrons <= 4) {
      cout << "Small table" << endl;
   } else if (numPatrons < 1) {
      cout << "Bad input" << endl;
   }

   return 0;
}