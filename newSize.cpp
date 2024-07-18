#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> countDown(0);
   int newSize;
   unsigned int i;

   cin >> newSize;
   //resize the vector
   countDown.resize(newSize);
   
     // Populate the vector with countdown values
    for (int i = 0; i < newSize; ++i) {
        countDown.at(i) = newSize - i;
    }

   for (i = 0; i < countDown.size(); ++i) {
      cout << countDown.at(i) << " ";
   }
   cout << "Go!" << endl;

   return 0;
}