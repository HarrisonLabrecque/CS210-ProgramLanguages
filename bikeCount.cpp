#include <iostream>
using namespace std;

int main() {
   int bikeCount;

   cin >> bikeCount;

   if (bikeCount < 9) {
      cout << "Single bike rack" << endl;
   } else if (bikeCount >= 9 && bikeCount < 49){
      cout << "Large bike rack" << endl;
   } else if (bikeCount >= 49) {
      cout << "Too many bikes" << endl;
   }

   return 0;
}