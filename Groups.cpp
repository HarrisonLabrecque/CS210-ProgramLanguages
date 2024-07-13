#include <iostream>
using namespace std;

int main() {
   int numberOfThings;
   int requiredGroups;
   int remainingGroups;

   cin >> numberOfThings;
   cin >> requiredGroups;
   cin >> remainingGroups;

   if ( numberOfThings <= 23){
      requiredGroups += 1;
   } else {
      remainingGroups += 4; 
   }

   cout << requiredGroups << endl;
   cout << remainingGroups << endl;

   return 0;
}