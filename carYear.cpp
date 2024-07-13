#include <iostream>
using namespace std;

int main() {
   int carYear;

   cin >> carYear;

    if (carYear < 1968) {
        cout << "Probably has few safety features." << endl;
    }

    if (carYear > 1970) {
        cout << "Probably has head rests." << endl;
    }

    if (carYear > 1990) {
        cout << "Probably has anti-lock brakes." << endl;
    }

    if (carYear > 2000) {
        cout << "Probably has tire-pressure monitor." << endl;
    }

   return 0;
}