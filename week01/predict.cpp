#include <iostream>
using namespace std;

namespace nsOne
{
    int value = 100;
}
namespace nsTwo
{
    int value = 200;
}
int main()
{
    using namespace nsOne;
    cout << value << endl;
    cout << nsTwo::value << endl;
    return 0;
}