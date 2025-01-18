// ex06_pass by reference memory model

#include <iostream>
using namespace std;

void mix_it_up(char v1, char &v2, char v3)
{
    // Declare a temporary character variable, initialized to a space
    char v4 = ' ';
    // Store the value of v1 into v4
    v4 = v1;
    // Assign the value of v2 (reference) to v1
    v1 = v2;
    // Assign the value of v3 to v2 (reference), modifying the original variable in main
    v2 = v3;
    v3 = v4;
}

int main()
{
    char x = 'a', y = 'b', z = 'c';

    // Call mix_it_up with x, y (as a reference), and z
    mix_it_up(x, y, z);

    cout << x << y << z << endl;
    return 0;
}
