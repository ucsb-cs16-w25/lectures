#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    int &ref = a; // Declare a reference variable `ref` that refers to `a`

    // &b = b;
    // ❌ ERROR: This line is invalid.
    // The `&` symbol does NOT work like this in assignment.
    // `&b` represents the address of `b`, which cannot be assigned a value.

    cout << ref << endl;  // Prints the value of `ref`, which is `10` (same as `a`)
    cout << &ref << endl; // Prints the memory address of `ref` (which is the same as `a`)
    cout << &a << endl;   // Prints the memory address of `a` (same as `ref`)

    return 0;
}
