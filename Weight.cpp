#include <iostream>
using namespace std;

int main() {
   float weightInPounds;
   
   cin >> weightInPounds;
   
   if (weightInPounds > 27.0 && weightInPounds < 78.9){
      cout << "Select" << endl;
   } else {
      cout << "Deny" << endl;
   }
   
   return 0;
}