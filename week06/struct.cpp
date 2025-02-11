#include <iostream>
// #include <string>
#include <vector>
using namespace std;

// Define a struct named Adventurer with attributes for the adventurer's details
struct Adventurer
{
    string name;
    string classType; // e.g., warrior, mage, etc.
    int health;
};

// Function to display an adventurer's details
void displayAdventurer(const Adventurer &adv)
{
    cout << adv.name << " the " << adv.classType << " has " << adv.health << " health points." << endl;
}

// Function to simulate a quest where each adventurer loses some health
void goOnQuest(vector<Adventurer> &team)
{
    cout << "\nThe team embarks on a challenging quest!\n";
    for (Adventurer &adv : team)
    {
        // Simulate the adventurer losing health during the quest
        adv.health -= 10; // Each adventurer loses 10 health points for simplicity
        displayAdventurer(adv);
    }
}

int main()
{
    // Initialize a team of adventurers
    vector<Adventurer> team = {
        {"Aragon", "Warrior", 100},
        {"Zephyr", "Mage", 80},
        {"Raven", "Rogue", 90}};

    cout << "Before the quest:\n";
    for (const Adventurer &adv : team)
    {
        displayAdventurer(adv);
    }

    // Simulate going on a quest
    goOnQuest(team);

    cout << "\nAfter the quest:\n";
    for (const Adventurer &adv : team)
    {
        displayAdventurer(adv);
    }

    return 0;
}