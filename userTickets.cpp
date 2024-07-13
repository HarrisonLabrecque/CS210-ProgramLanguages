#include <iostream>
using namespace std;

int main() {
   int awardPoints;
   int userTickets;

   cin >> userTickets; // Program will be tested with values: 6, 7, 8, 9.

   if (userTickets != 6){
      awardPoints = 10;
   } else {
      awardPoints = userTickets;
   }

   cout << awardPoints << endl;

   return 0;
}
