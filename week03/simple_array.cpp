#include <iostream>

using namespace std;

int main()
{
    // Define a constant for the number of students.
    // This value is set at compile time and cannot be changed during execution.
    const int NUMBER_OF_STUDENTS = 5;

    // Declare an array to store the scores for each student.
    // The size of the array is set to the number of students.
    int score[NUMBER_OF_STUDENTS]; // = {0} Initializaton is missing

    // Iterate over the score array using a for loop.
    for (int i = 0; i < NUMBER_OF_STUDENTS; i++)
    {
        // Print each element of the score array.
        // Note: As the scores are uninitialized, this will print garbage values.
        cout << score[i] << endl
             << endl;
    }

    return 0;
}