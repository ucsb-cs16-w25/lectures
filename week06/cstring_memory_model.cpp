#include <iostream>
using namespace std;

int main()
{
    // Define a separator line
    string LINE = "\n" + string(25, '=') + "\n\n";

    // Ensure arrays have enough space for null termination
    char str1[6] = "A";   // 6 bytes to include null terminator safely
    char str2[7] = "B";  // 7 bytes
    char str3[8] = "C"; // 8 bytes

    // Print memory addresses of the strings
    cout << "str1: " << (void *)str1 << " Value: " << str1 << endl;
    cout << "str2: " << (void *)str2 << " Value: " << str2 << endl;
    cout << "str3: " << (void *)str3 << " Value: " << str3 << endl;

    // Pointer manipulation
    char *moving = str2; // Pointer to `str2`

    cout << (void *)moving << " The value is " << moving << endl;

    moving -= 1;
    cout << (void *)moving << " The value is " << moving << endl;

    return 0;
}
