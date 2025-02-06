#include <iostream> 
using namespace std;

int main(int argc, char * argv[]) 
{
  // Convert the first argument (after the program name) to an integer
  int maxVal = stoi(argv[1]); 

  // Loop through the remaining command-line arguments
  for (int i = 2 ;  i < argc; i++)
    {
      // Convert the current argument to an integer and compare with maxVal
      if (maxVal < stoi(argv[i]))
        {
          maxVal = stoi(argv[i]); // Update maxVal if a larger value is found
        }
    }


  cout << "Maximum value is: " << maxVal << endl;

     return 0; 
}