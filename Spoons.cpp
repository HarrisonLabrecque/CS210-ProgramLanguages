#include <iostream>
using namespace std;

int main() {
   int orderedSpoons;

   cin >> orderedSpoons;  
   
   if ( orderedSpoons >= 30 &&  orderedSpoons <= 50){
      cout << "Small container" << endl;
   } else if ( orderedSpoons >= 90 &&  orderedSpoons <= 100){
      cout << "Medium container" << endl;
   }

   return 0;
}