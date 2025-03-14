#include <iostream>
using namespace std;

// Recursive function to count zeros in an integer
int countZeros(int n)
{
    // Base case for recursion termination when all digits have been checked
    if (n < 10)
        return (n == 0) ? 1 : 0;

    // Check if the last digit is zero
    int count = (n % 10 == 0) ? 1 : 0;

    // Remove the last digit and make a recursive call
    return count + countZeros(n / 10);
}

int main()
{
    int number = 12002305;

    cout << "Number of zeros in " << number << " is " << countZeros(number) << endl;

    return 0;
}
