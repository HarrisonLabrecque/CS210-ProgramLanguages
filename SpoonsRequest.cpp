#include <iostream>
using namespace std;

int main() {
   int spoonsRequested;

   cin >> spoonsRequested;  
   
   if (spoonsRequested >= 43 && spoonsRequested <= 87){
      cout << "Standard package" << endl;
   } else if (spoonsRequested > 133 && spoonsRequested <= 160){
      cout << "Full package" << endl;
   } else {
      cout << "Select another amount" << endl;
   }

   return 0;
}