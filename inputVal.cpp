#include <iostream>
using namespace std;

int main() {
   int inputVal;
   
   cin >> inputVal; 
   
   if (inputVal < 10) {
      cout << "Less than 10" << endl;       
   }
   else {
      cout << "10 or more" << endl;
   }

   return 0;
}