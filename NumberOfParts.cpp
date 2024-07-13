#include <iostream>
using namespace std;

int main() {
   int numberOfParts;

   cin >> numberOfParts;

   if (numberOfParts == 1){
      cout << "Monad" << endl;
   } else if ( numberOfParts == 2) {
      cout << "Dyad" << endl;
   } else if ( numberOfParts == 4) {
      cout << "Tetrad" << endl;
   } else {
      cout << "Another number of components" << endl;
   }

   return 0;
}