#include <iostream>

using namespace std;

// Function to sum up all even numbers in the array
int sumEvenNumbers(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
    // Check if the number is even
        if (arr[i] % 2 == 0) {  
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    // Example array
    int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Calculate the size of the array
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Calculate the sum of all even numbers
    int totalSum = sumEvenNumbers(myArray, size);

    // Print the sum
    cout << "The sum of all even numbers in the array is: " << totalSum << endl;

    return 0;
}
