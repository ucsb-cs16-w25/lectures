#include <iostream>
#include <vector>
using namespace std;

// Recursive function to perform binary search
// vec: sorted vector of integers
// target: element to search for
// low: starting index
// high: ending index
int binarySearch(const vector<int> &vec, int target, int low, int high)
{
    // Base case: if the range is invalid, target is not in the vector
    if (low > high)
    {
        return -1;
    }

    // Calculate the middle index to divide the search space
    int mid = low + (high - low) / 2; // Why not (low + high) / 2?

    // If the target is found, return the index
    if (vec[mid] == target)
        return mid;

    // If the target is greater, search the right half
    else if (vec[mid] < target)
        return binarySearch(vec, target, mid + 1, high);

    // If the target is smaller, search the left half
    else
        return binarySearch(vec, target, low, mid - 1);
}

int main()
{
    vector<int> vec = {2, 3, 4, 10, 40};

    int target = 10;

    int result = binarySearch(vec, target, 0, vec.size() - 1);

    if (result != -1)

        cout << "Element found at index " << result << endl;

    else

        cout << "Element not found in the vector" << endl;

    return 0;
}