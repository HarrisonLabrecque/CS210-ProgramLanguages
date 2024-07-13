#include <iostream>
using namespace std;

int main() {
   int numSeconds;
   
   cin >> numSeconds; 
   
   if (numSeconds < 60) {
      cout <<  "Less than a minute" << endl;
   } else {
      cout << "At least a minute" << endl;
   }
   

   return 0;
}