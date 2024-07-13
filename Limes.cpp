#include <iostream>
using namespace std;

int main() {
   int limesAvailable;

   cin >> limesAvailable;  
   
   if (limesAvailable > 8 && limesAvailable < 15) {
      cout << "Acceptable amount" << endl;
   }

   return 0;
}