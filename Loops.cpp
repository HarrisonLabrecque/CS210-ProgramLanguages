#include <iostream>
#include <string>
using namespace std;

int main() {
    string userInput;
    int userNumber;
    
    do {
        cin >> userInput;
        
        // Check if userInput is "quit" to break out of the loop
        if (userInput == "quit") {
            break;
        }
        
        cin >> userNumber;
        cout << "Eating " << userNumber << " " << userInput << " a day keeps you happy and healthy." << endl;
    } while (true);  // Infinite loop, will break on "quit"

    return 0;
}
