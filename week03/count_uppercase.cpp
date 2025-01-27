// Function declaration: count_uppercase
// Takes a string 's' as an argument
// Returns the number of uppercase letters in the string

#include <iostream>
using namespace std;

int count_uppercase_while(string s)
{
    int count = 0; // Variable to store the count of uppercase letters
    int index = 0;

    // Loop through each character in the string
    while (index < s.length())
    {
        // Check if the character at the current index is an uppercase letter
        // isupper() is a standard library function that checks for uppercase characters
        if (isupper(s[index]))
        {
            count++; // Increment the count if the character is uppercase
        }
        index++; // Move to the next character in the string
    }

    return count; // Return the total count of uppercase letters
}

int count_uppercase_for(string s)
{
    int count = 0; // Variable to store the count of uppercase letters

    // Loop through each character in the string
    for (int i = 0; i < s.length(); ++i)
    {
        // Check if the character is an uppercase letter
        if (isupper(s[i]))
        {
            count++; // Increment the count if the character is uppercase
        }
    }

    return count; // Return the total count of uppercase letters
}

int main()
{
    cout << count_uppercase_while("ZooM Room") << endl;                                  // Expected output: 3
    cout << count_uppercase_while("ASDASDlsdvoijrenlkAADASDO###SDSDAINAAFasst") << endl; // Expected output: 23

    cout << count_uppercase_for("ZooM Room") << endl;                                  // Expected output: 3
    cout << count_uppercase_for("ASDASDlsdvoijrenlkAADASDO###SDSDAINAAFasst") << endl; // Expected output: 23

    return 0;
}
