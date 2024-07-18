#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 5;
   vector<int> runTimes(NUM_VALS);
   unsigned int i;

   // Populate vector
   for (i = 0; i < runTimes.size(); ++i) {
      cin >> runTimes.at(i);
   }
   // printing out the 3 first elements
   for (i = 0; i < 3; ++i){
      cout << runTimes[i] << endl;
   }

   return 0;
}