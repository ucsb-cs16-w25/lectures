#include <iostream>
#include <cmath> // for fmod and round

using namespace std;

int number_of_cents(double change)
{
    // Get the fractional part (cents) using fmod
    double cents = fmod(change, 1);

    // Multiply by 100 and round to the nearest integer to avoid floating-point errors
    return round(cents * 100);
}

int main()
{
    double change;

    cout << "Enter the amount of change: ";
    cin >> change;

    cout << "The number of cents left after removing dollars is: "
         << number_of_cents(change) << " cents" << endl;

    return 0;
}