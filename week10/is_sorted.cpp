#include <iostream>
#include <vector>
using namespace std;

// Recursive function to check if the vector is sorted in non-decreasing order
bool isSorted(const vector<int> &vec, int index = 0)
{
    // Base case: if it's the last element or the vector is empty
    if (index == vec.size() - 1 || vec.size() == 0)
    {
        return true;
    }
    // Check if the current element is greater than or equal to the previous one
    // and then check recursively for the next elements
    if (vec[index] <= vec[index + 1])
        return isSorted(vec, index + 1);

    else
        return false;
}

int main()
{
    vector<int> vec = {1, 2, 31, 4, 5}; // Example vector
    // Call the function with the vector and starting index (default is 0)
    if (isSorted(vec))
        cout << "The vector is sorted." << endl;

    else
        cout << "The vector is not sorted." << endl;

    return 0;
}