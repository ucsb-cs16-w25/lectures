// The sizeof operator returns the size of a data type or variable in bytes. For example:
// The result of sizeof is multiplied by 8 to convert bytes into bits (since 1 byte = 8 bits).

#include <iostream>
using namespace std;

int main()
{
    cout << "Size of int is " << sizeof(int) << " bytes." << endl; // size of int is 4 bytes

    cout << "Size of int is " << sizeof(int) * 8 << " bits." << endl;           // -> 32 bits
    cout << "Size of long is " << sizeof(long) * 8 << " bits." << endl;         // -> 64 bits
    cout << "Size of short is " << sizeof(short) * 8 << " bits." << endl;       // -> 16 bits
    cout << "Size of char is " << sizeof(char) * 8 << " bits." << endl;         // -> 8 bits
    cout << "Size of char32_t is " << sizeof(char32_t) * 8 << " bits." << endl; // -> 32 bits
    cout << "Size of float is " << sizeof(float) * 8 << " bits." << endl;       // --> 32 bits
    cout << "Size of double is " << sizeof(double) * 8 << " bits." << endl;     // --> 64 bits

    return 0;
}
