#include <iostream>

using namespace std;

int main()
{
    for(int i = 3; i > 0; i--)
    {
      for(int j = 0; j < (2 * i + 1); j++)
        {
          if(j % 2 == 0)
          {
              cout << "*"; 
          }
          else
          {
              cout << "-"; 
          }   
       }   
       cout << endl;
    }   
    return 0;   
}