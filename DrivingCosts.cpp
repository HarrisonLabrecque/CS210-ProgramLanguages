#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {
   //declaring and initializing variables 
   double MilesPerGallon = 0.0;
   double CostPerGallon = 0.0;
   double cost20Miles = 0.0;
   double cost75Miles = 0.0;
   double cost500Miles = 0.0;
   
   
   //prompt for user to enter input
   cin >> MilesPerGallon;
   cin >> CostPerGallon;
   
   // Calculate costs for driving 20 miles, 75 miles, and 500 miles
   cost20Miles = (20.0 / MilesPerGallon) * CostPerGallon;
   cost75Miles = (75.0 / MilesPerGallon) * CostPerGallon;
   cost500Miles = (500.0 / MilesPerGallon) * CostPerGallon;
   
   // Output the calculated costs with two decimal places
   cout << fixed << setprecision(2);
   cout << cost20Miles << " " << cost75Miles << " " << cost500Miles << endl;

   return 0;
}
