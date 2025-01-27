
/*
This program calculates the product of numbers from 2 to 5 (inclusive).
The original code contained a logical error that caused an incorrect result.
The issue and correction are explained below.
*/

#include <iostream>

using namespace std;

// int main()
// {
//   int next = 2, product = 1;
//   while (next < 5) {
//       product = product * next;
//       next++;
//   }

//   cout << product << endl;
// }

int main()
{
  int next = 2, product = 1;

  // Loop through numbers from 2 to 5 and multiply them to 'product'
  while (next <= 5) // Ensure the loop includes 5 in the multiplication
  {
    product = product * next; // Multiply the current 'product' by 'next'
    next++;                   // Increment 'next' for the next iteration
  }

  cout << "The product of numbers from 2 to 5 is: " << product << endl;

  return 0;
}