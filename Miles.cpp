#include <iostream>
using namespace std;

double MphAndMinutesToMiles(double mph, double minutes){
      double hoursTraveled = minutes / 60.0;
      double milesTraveled = hoursTraveled * mph;
      
      return milesTraveled;
}

int main() {
   double milesPerHour;
   double minutesTraveled;

   cin >> milesPerHour;
   cin >> minutesTraveled;

   cout << "Miles: " << MphAndMinutesToMiles(milesPerHour, minutesTraveled) << endl;

   return 0;
}