#include <iostream>
#include <string>

using namespace std;

// Constants for the ninja and empty tile representations
const char NINJA = '&';
const char EMPTY_TILE = '_';

void printNinjaPositions(const int floorSize) 
{
    if (floorSize < 5) 
    { // The minimum floor size to accommodate both ninjas with rules
        cout << "The fight floor is too small for a training session." << endl;
        return;
    }

    // Start the first ninja at the second tile (index 1)
    // End the second ninja at the second-to-last tile (floorSize - 2)
    for (int firstNinja = 1; firstNinja < floorSize - 3; ++firstNinja) 
    {
        for (int secondNinja = firstNinja + 2; secondNinja < floorSize - 1; ++secondNinja) 
        {
            string floor(floorSize, EMPTY_TILE); // Create a floor filled with empty tiles
            floor[firstNinja] = NINJA; // Place the first ninja
            floor[secondNinja] = NINJA; // Place the second ninja
            cout << floor << endl; // Print out the current valid combination
        }
    }
}

int main() 
{
    const int floorSize = 6; // Example size, change this to test other sizes
    printNinjaPositions(floorSize);

    return 0;
}