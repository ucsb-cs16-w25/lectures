// ex05_boolean expressions

#include <iostream>
using namespace std;

int main()
{
    int x = 2;
    int y = -1;
    int z = 0;

    // Uncomment to print 'true' or 'false' instead of '1' or '0'
    cout << boolalpha << endl;

    // Since x = 2, y = -1, and z = 0, this evaluates to true (1)
    cout << (x != (y + z)) << endl; // true

    // Since 1/x results in 0 (integer division) and z is 0, this evaluates to
    // true (1)
    cout << ((x == 2) && ((1 / x) == z)) << endl; // true

    // Since !x is false, the whole expression evaluates to false (0)
    cout << ((!x) && y) << endl; //

    // cout << "!x = " << bool(!x) << endl;
    // cout << "bool(y) = " << bool(y) << endl;

    // Since z is not less than y, this evaluates to true (1)
    cout << !(z < y) << endl;

    return 0;
}
