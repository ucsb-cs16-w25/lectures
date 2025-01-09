// & Operator: Retrieves the memory address of a variable.
// Once a variable is allocated memory, its address does not change during the program's execution.
// Each variable has a unique memory address.
// The addresses are typically sequential in the stack memory.
// The memory address of a variable remains the same even if its value changes.
// On many systems, stack memory addresses grow downward  (i.e., toward lower addresses), 
// which is why the addresses of b, c, and d are lower than a.

#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    cout << "a is " << a << endl;
    cout << "Address of a is " << &a << endl;

    a = 2;
    cout << "a new value is " << a << endl;
    cout << "a address still is " << &a << endl;

    cout << "\n\n\n";
    int b = 4;
    int c = 6;
    int d = 8;

    cout << "Address of a is : " << &a << endl;
    cout << "Address of b is : " << &b << endl;
    cout << "Address of c is : " << &c << endl;
    cout << "Address of d is : " << &d << endl;
}