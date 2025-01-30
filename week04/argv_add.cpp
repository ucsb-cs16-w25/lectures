#include <iostream>

using namespace std; 

int main(int argc, char* argv[])
{  
    // Check if the correct number of command line arguments is provided
    if (argc != 4) {
        // If not, print usage instructions and exit with an error code
        cout << "Usage: " << argv[0] << " <operation> <number1> <number2>" << endl;
        return 1; // Non-zero return value indicates an error
    }

    // Assign the first command line argument (after the program name) to the operation
    string operation = argv[1];

    // Convert the second and third command line arguments to double
    double number1 = atof(argv[2]);
    double number2 = atof(argv[3]);
    double result = 0.0;

    if (operation == "add") {
        result = number1 + number2;
        cout << "Result of addition: " << result << endl;
    } 
    else if (operation == "sub") 
    {
        result = number1 - number2;
        cout << "Result of subtraction: " << result << endl;
    } 
    else 
    {
        cout << "Error: Operation not recognized. Use 'add' or 'sub'." << endl;
        return 1;
    }

    return 0;
}