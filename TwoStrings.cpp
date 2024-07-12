#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Declare two string variables to store input
  string firstString;
  string secondString;

  // Prompt user to enter two strings, and store them in variables
  cin >> firstString;
  cin >> secondString;

  // Compare the two strings lexicographically
  if (firstString < secondString)
  {
    // If firstString is less than secondString, print them in that order
    cout << firstString << " " << secondString << endl;
  }
  else
  {
    // Otherwise (if secondString is less than or equal to firstString), print them in reverse order
    cout << secondString << " " << firstString << endl;
  }

  return 0; // Return 0 to indicate successful execution
}
