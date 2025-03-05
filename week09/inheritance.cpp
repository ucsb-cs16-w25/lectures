#include <iostream>
using namespace std;

// Base class representing an enemy
class Enemy
{
public:
    Enemy();               // Constructor
    void setHealth(int h); // Sets health value
    int getHealth();       // Returns health value
    void talk();           // Virtual-like method for enemy speech (not actually virtual)

private:
    int health; // Private variable storing enemy's health
};

// Derived class representing a Vampire, which inherits from Enemy
class Vampire : public Enemy
{
public:
    Vampire();          // Constructor
    void talk();        // Overrides Enemy's talk() method
    int deductHealth(); // Decreases health of Vampire
};

// Derived class representing a Werewolf, which also inherits from Enemy
class Werewolf : public Enemy
{
public:
    void talk();     // Overrides Enemy's talk() method
    void moonTalk(); // Additional unique method for Werewolf
};

// Constructor for the Enemy class, initializes health to 5
Enemy::Enemy()
{
    health = 5;
}

// Sets health for an enemy
void Enemy::setHealth(int h)
{
    health = h;
}

// Returns current health of an enemy
int Enemy::getHealth()
{
    return health;
}

// Defines general enemy speech
void Enemy::talk()
{
    cout << "I am an enemy. Ruuuuuuuunnnnnnnnn!!!" << endl;
}

// Constructor for Vampire class, sets health to 10
Vampire::Vampire()
{
    setHealth(10);
}

// Vampire-specific talk function
void Vampire::talk()
{
    cout << "I want to suck your blood!!! blahblahblah!" << endl;
}

// Reduces Vampire's health by 1 and returns updated health
int Vampire::deductHealth()
{
    setHealth(getHealth() - 1);
    return getHealth();
}

// Werewolf-specific talk function
void Werewolf::talk()
{
    cout << "I bite you!" << endl;
}

// Unique Werewolf speech function when the moon is out
void Werewolf::moonTalk()
{
    cout << "Aooooooooooo!" << endl;
}

// Main function to test Enemy, Vampire, and Werewolf classes
int main()
{
    Enemy e;    // Create an Enemy object
    Vampire v;  // Create a Vampire object
    Werewolf w; // Create a Werewolf object

    e.talk(); // Calls Enemy's talk()
    v.talk(); // Calls Vampire's talk()
    w.talk(); // Calls Werewolf's talk()

    v.deductHealth(); // Reduce Vampire's health by 1
    w.moonTalk();     // Calls Werewolf's moonTalk()

    // Set and get health of Enemy
    e.setHealth(8);
    cout << e.getHealth() << endl; // Output: 8

    // Get health of Vampire and Werewolf
    cout << v.getHealth() << endl; // Output: 9 (since health was reduced)
    cout << w.getHealth() << endl; // Output: 5 (default enemy health)

    // Further reduce Vampire's health and print
    cout << v.deductHealth() << endl; // Output: 8

    return 0;
}