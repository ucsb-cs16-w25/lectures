#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create a vector of strings with an initial size of 3
    vector<string> schools(3);

    schools.at(0) = "UCSB";
    schools.at(1) = "UCSD";
    schools.at(2) = "UCB";

    // This line, if uncommented, would cause an out_of_range error
    // because it tries to access an element (4th) that doesn't exist in the initially declared size
    // schools.at(3)="UCD";

    // Adds "UCD" to the end of the vector, resizing it to accommodate the new element
    schools.push_back("UCD");

    for (int i = 0; i < schools.size(); i++)
    {
        cout << "schools.at(" << i << ")=" << schools.at(i) << endl;
    }

    return 0;
}