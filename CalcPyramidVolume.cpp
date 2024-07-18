#include <iostream>
using namespace std;

double  CalcPyramidVolume(double length, double width, double height){
   double volume;
   
   volume = length * width * height * (1.0 / 3.0);
 
   return volume;  
}

int main() {
   double userLength;
   double userWidth;
   double userHeight;

   cin >> userLength;
   cin >> userWidth;
   cin >> userHeight;

   cout << "Volume: " << CalcPyramidVolume(userLength, userWidth, userHeight) << endl;

   return 0;
}