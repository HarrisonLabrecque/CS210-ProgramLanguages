#include <iostream>
using namespace std;

void  PrintDrinksList(string data1, string data2, string data3){
   cout <<"Top drinks:" << endl;
   cout << "#1 " << data1 << endl;
   cout << "#2 " << data2 << endl;
   cout << "#3 " << data3 << endl;
}


int main() {
   string drink1;
   string drink2;
   string drink3;

   cin >> drink1;
   cin >> drink2;
   cin >> drink3;

   PrintDrinksList(drink1, drink2, drink3);

   return 0;
}