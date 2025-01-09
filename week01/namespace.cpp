// In C++, a namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc.) inside it. Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.

// A simple way to understand a namespace is as a container for identifiers. It allows the same identifier to be used for different entities in different namespaces. This is particularly useful in large projects to avoid conflicts with names in the code or in the libraries and APIs you might be using.

// The std namespace is one of the most commonly used namespaces in C++. It's a part of the C++ Standard Library, and when you see code like std::cout or std::vector, it means that cout or vector is a part of the std namespace.

#include <iostream>
using namespace std;
// using namespace nsYoung;

namespace nsYoung
{
    int age = 10;
}

namespace nsOld
{
    int age = 20;
}

// using namespace nsYoung;

int main()
{
    int age = 30;
    cout << age << endl;
    cout << nsYoung::age << endl;
    // cout << age << endl;
    cout << nsOld::age << endl;

    return 0;
}