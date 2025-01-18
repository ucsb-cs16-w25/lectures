#include <iostream>
using namespace std;

// Function to modify the value of the passed variable and print its address
// 'ref' is a reference to an integer
void modifyValue(int &ref)
{
    ref = 10;
    // Print the memory address of the referenced variable
    cout << &ref << endl;
}

int main()
{
    int a = 5;
    // Print the memory address of 'a'
    cout << &a << endl;
    cout << "Before call a is: " << a << endl;
    // Call 'modifyValue' with 'a'. 'ref' in 'modifyValue' becomes an alias for 'a'
    modifyValue(a);
    cout << "After call a is: " << a << endl;

    return 0;
}
