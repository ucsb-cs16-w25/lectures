
/* Return a string that contains the characters from s with an underscore
   added after every character except the last.
   use a while loop.
   */

#include <iostream>

using namespace std;

string add_underscores(const string &s)
{

    if (s.empty())
        return "";

    string result;
    int index = 0;

    while (index < s.length() - 1)
    {
        result += s[index];
        result += '_';
        index++;
    }

    // Add the last character without an underscore
    result += s[index];

    return result;
}

int main()
{
    cout << "Adding underscores to 'hello': " << add_underscores("hello") << endl; // Expected: "h_e_l_l_o"
    cout << "Adding underscores to 'ab': " << add_underscores("ab") << endl;       // Expected: "a_b"

    return 0;
}