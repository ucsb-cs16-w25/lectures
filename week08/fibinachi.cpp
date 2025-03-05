#include <iostream>
using namespace std;

// Function to calculate the Fibonacci number using recursion
int fibonacci(int n)
{
    // Base cases: Fibonacci(0) = 0, Fibonacci(1) = 1
    if ((n == 0) || (n == 1))
        return n;

    // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    cout << fibonacci(10) << endl;

    return 0;
}