#include <iostream> 
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5}; // Declare and initialize an array of size 5
    int *p = a;  // Pointer `p` points to the first element of array `a`

    cout << *(p + 2) << endl;  // Access and print the value at index 2 of `a`
    cout << p + 4 << endl;     // Print the memory address at index 4 of `a`
    cout << *(p + 4) << endl;  // Access and print the value at index 4 of `a`

    return 0; 
}
