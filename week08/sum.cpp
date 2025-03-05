#include <iostream>
using namespace std;

// Helper function to reverse the digits of a number using recursion
int reverseHelper(int n, int reversed)
{
    if (n == 0)               // Base case: when all digits have been processed
        return reversed / 10; // Remove the last extra multiplication by 10

    reversed += n % 10; // Extract last digit and add to reversed
    reversed *= 10;     // Shift left by one digit (multiply by 10)

    return reverseHelper(n / 10, reversed); // Recursive call with remaining digits
}

// Function to reverse the digits of a number
int reverseNumber(int n)
{
    return reverseHelper(n, 0); // Start the recursion with initial reversed value as 0
}

int main()
{
    int num = 1234;
    cout << "Reversed number: " << reverseNumber(num) << endl;
    return 0;
}
