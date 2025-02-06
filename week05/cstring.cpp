#include <iostream>
#include <cstring> // For C-style string functions like strlen and strcmp

using namespace std;

int main()
{
    string LINE = "\n" + string(25, '=') + "\n\n";

    char str1[] = "Hello";  // Size automatically determined
    char str2[6] = "World"; // Fixed size
    char str3[4];           // Uninitialized

    cout << &str1 << endl;
    cout << &str2 << endl;
    cout << &str3 << endl;

    cout << "str2 is: " << str2 << endl; // Expected "World"

    str2[5] = 'r';
    cout << "str2 is: " << str2 << endl; // "WorldrHello"

    cout << LINE;

    // Demonstrating a C-style string
    char cStyleString[] = "C-style";
    cout << "Original C-style string: " << cStyleString << endl;

    // Changing content of the C-style string
    // cStyleString = "Hello";
    strncpy(cStyleString, "Hello", 5);
    cStyleString[5] = '\0'; // Ensuring null termination
    cout << "After strncpy: " << cStyleString << endl;

    // Comparing C-style strings
    if (strcmp(cStyleString, "Hello") == 0)
    {
        cout << "The string is now 'Hello'" << endl;
    }
    else
    {
        cout << "The string is not 'Hello'" << endl;
    }

    cout << LINE;

    // Displaying memory addresses and characters of C-style string
    for (int i = 0; i < strlen(cStyleString); i++)
    {
        // cout << &cStyleString[i] << "=" << cStyleString[i] << endl; // Dereferences, but we don't want it.
        cout << (void *)&cStyleString[i] << "=" << cStyleString[i] << endl;
    }
    return 0;
    cout << LINE;

    // Converting C-style string to a C++ string
    string cppString = cStyleString;
    cout << "Converted to C++ string: " << cppString << endl;

    for (size_t i = 0; i < cppString.size(); i++)
    {
        // cout << &cppString[i] << "=" << cppString[i] << endl;
        cout << (void *)&cppString[i] << "=" << cppString[i] << endl;
    }

    // Modifying and displaying the C++ string
    cppString += "Extended";
    cout << "After modification: " << cppString << endl;

    // Demonstrating string find function
    cout << "First occurrence of 'l' or 'o' in C++ string: " << cppString.find_first_of("lo") << endl;

    return 0;
}