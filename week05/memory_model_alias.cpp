
#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 4;

    // Create references (aliases) for 'a' and 'b'
    int &refA = a;
    int &refB = b;

    // Output the values via references (2 and 4 respectively)
    cout << refA << endl;
    cout << refB << endl;

    // Swap the values of 'a' and 'b' through their references
    int temp = refA; // Use 'temp' to hold the value of 'a'
    refA = refB;     // Assign the value of 'b' to 'a' through the references
    refB = temp;     // Assign the original value of 'a' to 'b'

    // Output the swapped values via references (4 and 2 respectively)
    cout << refA << endl;
    cout << refB << endl;

    return 0;
}