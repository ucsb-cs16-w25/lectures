#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 4;

    // Initialize pointers to the addresses of 'a' and 'b'
    int *ptr1 = &a;
    int *ptr2 = &b;

    // Output the values pointed by ptr1 and ptr2 (2 and 4 respectively)
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;

    // Swap the pointers ptr1 and ptr2
    int *temp = ptr1; // temp now points to what ptr1 points to (a)
    ptr1 = ptr2;      // ptr1 now points to what ptr2 points to (b)
    ptr2 = temp;      // ptr2 now points to what temp points to (a)

    // Output the values pointed by ptr1 and ptr2 after the swap (4 and 2 respectively)
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;

    return 0;
}