// Recursion Reverse String

#include <iostream>

using namespace std;

// Recursive function to reverse a string
string reverseString(const string &str)
{
    // Base case: If the string is empty or has only one character
    if (str.length() <= 1)
        return str;

    // Recursively call reverseString on the substring excluding the first character
    // and append the first character at the end
    return reverseString(str.substr(1)) + str[0];
}

int main()
{
    string originalString = "Hello World";

    string reversedString = reverseString(originalString);

    cout << "Original String: " << originalString << endl;
    cout << "Reversed String: " << reversedString << endl;

    return 0;
}
