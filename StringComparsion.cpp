#include <iostream>
#include <string>
using namespace std;

int main()
{
  string userString;

  // Prompt user to enter a string
  cin >> userString;

  // Check if userString is equal to "Quit"
  if (userString == "Quit")
  {
    // If user entered "Quit", print "Goodbye"
    cout << "Goodbye" << endl;
  }
  else
  {
    // If user entered anything else, print "Hello"
    cout << "Hello" << endl;
  }

  return 0; // Return 0 to indicate successful execution
}
