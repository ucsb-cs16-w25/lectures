#include <iostream>

using namespace std;

int main()
{
    int a = 111;
    int b = 222;
    int c = 333;

    // Declare pointers and a reference:
    int *ptr_a = &a; // Pointer to `a`, stores address of `a`
    int *ptr_b = &b; // Pointer to `b`, stores address of `b`
    int &ptr_c = c;  // Reference to `c`, an alias for `c` (not a pointer)

    // Print memory addresses

    cout << "ptr_a = " << ptr_a << " points to " << *ptr_a << endl; // Prints address of `a`
    cout << "ptr_b = " << ptr_b << " points to " << *ptr_b << endl; // Prints address of `b`
    cout << "ptr_c = " << &ptr_c << " contains " << ptr_c << endl;  // Prints address of `c` (same as `&c`)

    // Pointer arithmetic example:
    int *ptr_new = &b;                        // Pointer `ptr_new` now points to `b`
    cout << "ptr_new = " << *ptr_new << endl; // Dereference `ptr_new`, prints value of `b` (222)

    ptr_new -= 1;                             // Move pointer `ptr_new` back by one `int` (typically 4 bytes in memory)
    cout << "ptr_new = " << *ptr_new << endl; // Prints value at new location (should be `a` -> 111)

    ptr_new += 2;                             // Move pointer `ptr_new` forward by two `int` positions
    cout << "ptr_new = " << *ptr_new << endl; // Prints value at new location (may be `c` -> 333, but depends on memory layout)

    return 0;
}