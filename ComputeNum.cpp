#include <iostream>
using namespace std;

int ComputeNum(int num1){
   int result;
   
   result = num1 - 7;
   
   return result;
}

int main() {
   int input;
   int result;
   
   cin >> input;
   
   result = ComputeNum(input);
   
   cout << result << endl;

   return 0;
}