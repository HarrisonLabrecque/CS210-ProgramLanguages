#include <iostream>
using namespace std;

void PrintCitySize(string city, int population){
   cout << city << " has " << population << " people." << endl;
}

int main() {
   string cityName;
   int citySize;

   cin >> cityName;
   cin >> citySize;

   PrintCitySize(cityName, citySize);

   return 0;
}