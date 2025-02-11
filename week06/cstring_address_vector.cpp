#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // This creates an array of characters in memory and copies the string literal "UCSB" into that array.
    // The array is stored in stack memory
    // The contents of arr1 can be modified because it's an array.
    char school1[] = "UCSB";
    // school1[0] = 'N';  // This is valid; arr1 now holds "NCSB"

    // This creates a pointer to a string literal "UCR", which is typically stored in read-only memory.
    // Attempting to modify the contents of arr2 leads to undefined behavior and may cause a runtime error (like a segmentation fault).
    const char *school2 = "UCR";
    // school2[0] = 'N';  // This is invalid and can crash the program!

    // Initialize a vector of constant character pointers (C-style strings)
    vector<const char *> schools = {school1, school2, "UCLA", "UCD"};

    // First loop: Print the memory addresses of the vector elements (not the strings)
    for (int i = 0; i < schools.size(); i++)
    {
        cout << &schools[i] << endl; // Prints the address of the pointer stored in the vector
    }

    cout << string(25, '-') << endl;

    // Second loop: Print the memory addresses of the strings themselves
    for (int i = 0; i < schools.size(); i++)
    {
        cout << (void *)schools[i] << " points to " << schools[i] << endl; // Cast to (void*) to print the address of the C-style string
    }

    return 0;
}