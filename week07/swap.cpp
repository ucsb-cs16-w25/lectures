#include <iostream>
using namespace std;

// Function to swap the values of two integers using pointers
void swapValues(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/*
 * Incorrect implementation of swapValues
 * This function does not actually swap the values of the integers.
 * Instead, it swaps the local pointer addresses, which does not affect the original variables in main().
 * The issue is that `temp` is a pointer, but swapping pointer addresses in this way has no effect on the actual values.
 */
// void swapValues(int *a, int *b)
// {
//     int *temp;
//     temp = a;  // temp now points to the same location as a
//     a = b;     // a now points to the same location as b
//     b = temp;  // b now points to the original location of a
//     // This does not change the actual integer values at the memory addresses
// }

int main()
{
    int num1 = 10;
    int num2 = 20;

    swapValues(&num1, &num2);

    cout << num1 << ", " << num2 << endl;

    return 0;
}