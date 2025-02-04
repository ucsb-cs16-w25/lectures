#include <iostream>
#include <vector>

using namespace std;

// Function that calculates the sum of all digits in all strings within a vector.
int digitalSum(const vector<string> &numsList)
{
    int sum = 0;

    // Iterate over each string in the vector
    for (int i = 0; i < numsList.size(); ++i)
    {
        // Iterate over each character in the string
        for (int j = 0; j < numsList[i].length(); ++j)
        {
            // Add the integer value of the digit to the sum
            // '0' is subtracted to convert from char to int
            sum += numsList[i][j] - '0';
        }
    }

    return sum;
}

int main()
{
    // Test cases
    vector<string> nums1 = {"64", "128", "256"};
    cout << "Digital sum of ['64', '128', '256']: " << digitalSum(nums1) << endl; // Expected: 34

    vector<string> nums2 = {"12", "3"};
    cout << "Digital sum of ['12', '3']: " << digitalSum(nums2) << endl; // Expected: 6

    return 0;
}