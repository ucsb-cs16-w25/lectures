#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    // Create a separator line of 25 underscores followed by two new lines
    string line = string(25, '_') + "\n\n";

    // Print the number of command-line arguments
    cout << "argc = " << argc << endl;

    // Print the first and second command-line arguments (if available)
    cout << argv[0] << endl; // The program's name (executable path)
    cout << argv[1] << endl; // The first user-provided argument

    cout << line;

    // Print all command-line arguments values
    for (int i = 0; i < argc; i++)
    {
        cout << "argv[" << i << "] = " << argv[i] << endl;
    }

    cout << line;

    // Print all command-line arguments memory addresses
    for (int i = 0; i < argc; i++)
    {
        cout << "argv[" << i << "] = " << &argv[i] << endl;
    }

    cout << line;

    // Print all command-line arguments what they actually contain
    for (int i = 0; i < argc; i++)
    {
        cout << "(void * ) argv[" << i << "] = " << (void *)argv[i] << endl;
    }

    return 0;
}