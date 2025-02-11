// Consider the following code. What is the mistake in the code? And why that causes problem? How do you correct it?

#include <iostream>
using namespace std;

int main()
{
    bool prime = true;
    int n, i = 2;
    cout << "Enter an integer greater than 2: ";
    cin >> n;
    while ((i < n) && prime)
    {
        if (n % i == 0)
        {
            prime = false;
            // i++; // Mistake
        }
        i++; //<-- correct
    }

    if (prime)
    {
        cout << n << " is a prime number \n";
    }
    else
    {
        cout << n << " is not a prime number \n";
    }
    return 0;
}