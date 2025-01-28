#include <iostream>

using namespace std;

// Function to check if an array is sorted in ascending order
bool isArraySorted(int arr[], int size)
{
    // Loop through the array from the start to the second-to-last element
    for (int i = 0; i < size - 1; i++)
    {
        // If the current element is greater than the next one, the array is not sorted
        if (arr[i] > arr[i + 1])
        {
            return false;
        }

        // Why I cannot replace the above line with return (arr[i] >= arr[i + 1])  ?
    }
    // If the loop completes without returning false, the array is sorted
    return true;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    // In C++, the size of an array can be determined using the size of the array
    // in bytes divided by the size of one element in the array.
    cout << sizeof(arr) << endl;
    int size = sizeof(arr) / sizeof(arr[0]);   

    if (isArraySorted(arr, size))
    {
        cout << "Array is sorted in ascending order." << endl;
    }
    else
    {
        cout << "Array is not sorted in ascending order." << endl;
    }

    return 0;
}