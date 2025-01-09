#include <iostream>
using namespace std;

namespace A
{
    int value = 10;
}

namespace B
{
    int value = 20;
}

using namespace A;
using namespace B;

int main()
{
    cout << value << endl;
}
