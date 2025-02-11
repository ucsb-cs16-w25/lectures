#include <iostream>
#include <vector>
using namespace std;

// Function that determines if a specific amount can be paid using exactly two coins
// from a given set of denominations.
bool can_pay_with_two_coins(const vector<int> &denoms, int amount)
{
    /*
    Return True if and only if it is possible to form amount, which is a
    number of cents, using exactly two coins, which can be of any of the
    denominations in denoms.
    can_pay_with_two_coins([1, 5, 10, 25], 35) == true
    can_pay_with_two_coins([1, 5, 10, 25], 20) == true
    can_pay_with_two_coins([1, 5, 10, 25], 12) == false
    */

    // Loop through all possible pairs of denominations
    for (size_t coin1 = 0; coin1 < denoms.size(); coin1++)
    {
        for (size_t coin2 = coin1; coin2 < denoms.size(); coin2++)
        { // Start from coin1 to include the same denomination twice
            // If the sum of two denominations equals the amount, return true
            if (denoms[coin1] + denoms[coin2] == amount)
            {
                return true;
            }
        }
    }
    // If no pairs match the amount, return false
    return false;
}

int main()
{
    // Define a vector of coin denominations
    vector<int> coins{1, 5, 10, 25};

    // Print boolean values as 'true' or 'false'
    cout << boolalpha;

    // Test the function with different amounts
    cout << "Can pay 35 with two coins: " << can_pay_with_two_coins(coins, 35) << endl; // Expected: true
    cout << "Can pay 20 with two coins: " << can_pay_with_two_coins(coins, 20) << endl; // Expected: true
    cout << "Can pay 12 with two coins: " << can_pay_with_two_coins(coins, 12) << endl; // Expected: false

    return 0;
}