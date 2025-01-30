#include <iostream>
#include <vector>
using namespace std;

// Creating type aliases using typedef for better readability
typedef vector<string> animals;
typedef vector<animals> taxonomy;

int main()
{
     // Creating vectors to store different types of animals
     animals birds;   // A vector of strings to store names of birds
     animals mammals; // A vector of strings to store names of mammals

     // Creating a taxonomy (a vector of vectors)
     taxonomy animalsTaxonomy;

     // Adding bird names to the 'birds' vector
     birds.push_back("Parrot");
     birds.push_back("Robin");
     birds.push_back("Crow");

     // Adding mammal names to the 'mammals' vector
     mammals.push_back("Horse");
     mammals.push_back("Dog");
     mammals.push_back("Cat");

     // Printing bird names
     cout << birds.at(0) << endl; // Output: Parrot
     cout << birds.at(1) << endl  // Output: Robin
          << endl;

     // Printing mammal names
     cout << mammals.at(0) << endl; // Output: Horse
     cout << mammals.at(1) << endl; // Output: Dog

     // Adding the 'birds' and 'mammals' vectors into the 'animalsTaxonomy' 2D vector
     animalsTaxonomy.push_back(birds);
     animalsTaxonomy.push_back(mammals);

     // Accessing an element from the 'animalsTaxonomy' vector
     // animalsTaxonomy.at(1) -> refers to 'mammals' vector
     // animalsTaxonomy.at(1).at(2) -> accesses the 3rd element in 'mammals' ("Cat")

     cout << animalsTaxonomy.at(1).at(2) << endl; // Output: Cat

     for (animals animals : animalsTaxonomy)
     {
          for (string animal : animals)
               cout << animal << " ";

          cout << endl;
     }

     return 0;
}
