#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {10, 20, 30, 40, 50};
    // int *ptr = arr; // Pointer to the first element of the array

    // char arr[] = {'a', 'b', 'c', 'd', 'e'};
    // char *ptr = arr; // Pointer to the first element of the array

    double arr[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    double *ptr = arr; // Pointer to the first element of the array

    // Fix: Correct the loop declaration
    for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << (void *)&arr[i] << endl; // Fix: Added space for readability
    }
    cout << endl; // Fix: Add newline for better output formatting

    cout << "Initial pointer value: " << *ptr << endl;

    // Shift the pointer forward
    ptr++;
    cout << "After shifting right: " << *ptr << endl;

    // Shift the pointer forward again
    ptr += 2;
    cout << "After shifting right by 2: " << *ptr << endl;

    // Shift the pointer backward
    ptr--;
    cout << "After shifting left: " << *ptr << endl;

    return 0;
}