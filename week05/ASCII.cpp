#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int sum = 5;

    // sum += '6'; // This line adds the ASCII value of '6' (54).

    sum += '6' - '0'; // This converts the character '6' into its integer representation.
                      // '6' has an ASCII value of 54
                      // '0' has an ASCII value of 48
                      // So, '6' - '0' = 54 - 48 = 6
                      // sum = sum + 6
                      // sum = 5 + 6 = 11

    cout << sum << endl; // Output is 11

    // Moving forward from '0' to reach character '6' and convert the ASCII code to char
    cout << char('0' + 6) << endl;

    return 0;
}