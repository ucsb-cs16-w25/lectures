#include <iostream>
#include <cstring>
using namespace std;

// Why const char * const?
// So that we can pass in string literals
// such as "UCSB" or "Santa Claus"

int countChars(const char * const s, char c)
{
    int count = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            count++;
        }
        i++;
    }
    return count; // moved return count to outside for loop
}

int check_expect(int expected, int actual)
{
    if (expected == actual)
        return 0;

    cout << "ERROR: expected: " << expected
         << " but I got: " << actual << endl;
    return 1;
}

int test_countChars()
{
    int errors = 0;
    // char str[5] = "UCLA";
    // // str[4] = 'M';
    // int arrInt[] = {1, 2, 3, 4};

    cout << "---------------->  " << strlen("U\0CS\0B") << endl;
    cout << "---------------->  " << strlen("UCSC") << endl;
    // cout << "---------------->  " << sizeof("UC\0SC") << endl;

    // cout << "---------------->  " << sizeof(arr) << endl;

    errors += check_expect(1, countChars("U\0CSB", 'C'));
    errors += check_expect(2, countChars("UCSC", 'C'));
    errors += check_expect(0, countChars("UCB", 'X'));
    //   errors += check_expect( 0, countChars(str,'\0'));
    if (0 == errors)
    {
        cout << "All good!" << endl;
    }
    return errors;
}

int main()
{
    return test_countChars();
}