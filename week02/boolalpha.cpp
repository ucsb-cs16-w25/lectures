#include <iostream>
using namespace std;

int main() {
    bool flag = true;

    // Print with boolalpha
    cout << boolalpha;
    cout << "With boolalpha: " << flag << endl; // Outputs: true

    // Cancel boolalpha with noboolalpha
    cout << noboolalpha;
    cout << "With noboolalpha: " << flag << endl; // Outputs: 1

    return 0;
}