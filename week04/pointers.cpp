#include <iostream>
using namespace std;

// Function that doubles the value of the passed integer by reference
void doubleValueByreference(int &num)
{
    num = num * 2;
    cout << "Inside function, doubled value: " << num << endl;
}

void doubleValueByPointer(int *num)
{
    *num = *num * 2;
    cout << "Inside function, doubled value: " << num << endl;
}

int main()
{
    // Initializing an integer variable
    int originalValue = 5;
    // Creating a pointer that holds the address of the originalValue variable
    int *pointerToOriginal = &originalValue;

    // Printing the address of originalValue using its address and pointer
    cout << "Address of originalValue: " << &originalValue << endl;
    cout << "Address stored in pointerToOriginal: " << pointerToOriginal << endl;

    // Demonstrating dereferencing a pointer to get the value it points to
    cout << "Value pointed to by pointerToOriginal: " << *pointerToOriginal << endl;

    // Creating a reference to originalValue
    int &referenceToOriginal = originalValue;
    cout << "Initial value of referenceToOriginal: " << referenceToOriginal << endl;

    // Modifying the value of originalValue through the reference
    referenceToOriginal = 7;
    cout << "Value of originalValue after modification: " << originalValue << endl;

    // Demonstrating the effect of passing by reference
    doubleValueByreference(referenceToOriginal);
    cout << "Value of referenceToOriginal after doubling: " << referenceToOriginal << endl;
    cout << "Value of originalValue after passing to doubleValue function: " << originalValue << endl;

    // Demonstrating the effect of passing by pointer
    doubleValueByPointer(&referenceToOriginal);
    cout << "Value of referenceToOriginal after doubling: " << referenceToOriginal << endl;
    cout << "Value of originalValue after passing to doubleValue function: " << originalValue << endl;
}
