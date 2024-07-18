#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_VALS = 4;
    vector<int> courseGrades(NUM_VALS);
    int i;

    // Read values into the vector
    for (i = 0; i < courseGrades.size(); ++i) {
        cin >> courseGrades.at(i);
    }

    // Print forwards
    for (i = 0; i < courseGrades.size(); ++i) {
        cout << courseGrades[i] << " ";
    }
    
    // Print backwards
    for (i = courseGrades.size() - 1; i >= 0; --i) {
        cout << courseGrades[i];
        if (i != 0) {
            cout << " ";
        }
    }
    
    cout << endl;

    return 0;
}
