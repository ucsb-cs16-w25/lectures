#include <iostream>
using namespace std;

int main()
{
    int var;

    // The condition in the 'if' statement assigns the value 7 to 'var'.
    // Since assignment evaluates to the assigned value (7 in this case),
    // the condition is treated as 'true' (non-zero values are true in C++).
    if (var = 7)                           // WARNING: This is assignment, not comparison.
        cout << "var is: " << var << endl; // This will print regardless of the variable's value.

    if (var = 0)
        cout << "var is 0" << endl; // This will not print.

    if (var = -3)
        cout << "var is -3" << endl; // Does this print? Why?

    // Assign 12 to 'var' and print the value immediately.
    // The assignment operation returns the assigned value (12), which is then output.
    cout << (var = 12) << endl;

    return 0;
}
