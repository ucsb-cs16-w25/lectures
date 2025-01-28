#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Initialize the matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 2},
        {7, 8, 9}
    };

    // Replace the occurrences of 2 with 12
    matrix.at(0).at(1) = 12;  // Replacing the 2 at position (0, 1)
    matrix.at(1).at(2) = 12;  // Replacing the 2 at position (1, 2)

    cout << "Modified Matrix:\n";
    for (vector<int> &row : matrix) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << "\n";
    }

    return 0;
}
