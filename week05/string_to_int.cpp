#include <iostream>
using namespace std;

// Converts a string of digits to an integer.
int stringToInt(const char *str)
{
    cout << (void *)str << " contains " << str << endl;

    int result = 0;
    // Loop until the end of the string.
    while (*str != '\0')
    {
        cout << *str << endl;
        // cout << "*str = " << *str << endl;
        // Shift and add current digit.
        result = result * 10 + (*str - '0');
        // Move to the next character.
        str++;
    }
    // Return the converted integer.
    return result;
}

int main(int argc, char *argv[])
{
    int sum = 0;
    // Check if the command-line argument is provided.
    if (argc < 2)
    {
        cout << "Usage: " << argv[0] << " <number> <number> ..." << endl;
        // Return an error code.
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        sum += stringToInt(argv[i]);
    }

    cout << sum << endl;

    return 0;
}