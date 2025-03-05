#include <iostream>
#include <string>

using namespace std;

const int BASE = 2;

/*
 * Function: decimalToBinary
 * -------------------------
 * Recursively converts a decimal number to its binary representation.
 *
 * Parameters:
 *  - n: The decimal number to be converted to binary.
 *
 * Returns:
 *  - A string representing the binary equivalent of the decimal number.
 */
string decimalToBinary(int n)
{
    // Base case: If n is less than the base (2), return it as a string
    if (n < BASE)
    {
        return to_string(n); // Converts integer n to string and returns it
    }

    // Recursive case: Append the remainder (n % BASE) to the binary representation of n / BASE
    return decimalToBinary(n / BASE) + to_string(n % BASE);
}

int main()
{
    int number = 10;

    string binary = decimalToBinary(number);

    cout << "The binary representation of " << number << " is " << binary << endl;

    return 0;
}