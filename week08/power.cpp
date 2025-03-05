#include <iostream>
using namespace std;

int power_slow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * power_slow(x, n - 1);
}

int power_fast(int x, int n)
{
    if (n == 0)
        return 1;

    if (n % 2 == 0)
    {
        int partial = power_fast(x, n / 2);
        return partial * partial;
    }
    else
    {
        int partial = power_fast(x, (n - 1) / 2);
        return x * partial * partial;
    }
}

int main()
{

    int x = 3;
    int n = 8;

    cout << x << " raised to the power " << n << " is " << power_slow(x, n) << endl;
    cout << x << " raised to the power " << n << " is " << power_fast(x, n) << endl;
    return 0;
}