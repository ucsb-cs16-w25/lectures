// Takes a double value representing an amount of money in dollars and cents
// Returns the number of cents left after removing all whole dollars

#include <iostream>  
#include <cmath>       // for mathematical function fmod

using namespace std;


int number_of_cents(double change) {
    // fmod is used to find the remainder after dividing the change by 1
    // This gives the fractional part of the amount (i.e., the cents part)
    double cents = fmod(change, 1);

    // The fractional part (cents) is converted to an integer
    // by multiplying it by 100, as there are 100 cents in a dollar
    return round(cents * 100);  
}


int main() {
    double change;

    cout << "Enter the amount of change: ";
    cin >> change;

    cout << "The number of cents left after removing dollars is: " 
         << number_of_cents(change) << " cents" << endl;

    return 0; // Indicates successful program termination
}
