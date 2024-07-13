#include <iostream>
using namespace std;

int main() {
   int numberOfChairs;

   cin >> numberOfChairs;

   if (numberOfChairs <= 9) {
      cout << "Too few chairs" << endl;
   } else {
      cout << "Enough chairs" << endl;

   return 0;
}