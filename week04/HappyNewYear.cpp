#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to get Chinese Zodiac sign
string getZodiac(int year) {
    vector<string> zodiac = {
        "Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox", 
        "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat"
    };
    return zodiac[year % 12];
}

// Function to generate a fortune message
string getFortune() {
    vector<string> fortunes = {
        "Great fortune awaits you this year!",
        "Your hard work will pay off in unexpected ways.",
        "New opportunities will bring happiness and success.",
        "A kind heart will attract positive energy into your life.",
        "Embrace change, as it will lead to growth and wisdom.",
        "Friendship and love will shine brightly for you this year."
    };
    return fortunes[rand() % fortunes.size()];
}

// Function to print a simple ASCII dragon
void printDragon() {
    cout << R"(
         \||/
         |  @___oo
   /\  / (__,,,,| 
  ) )\_)-'  )_)    
  \_/  (__)      
     )_)         
     )_)         
    )_)         
  ~ Happy Chinese New Year! ~
)" << endl;
}

int main() {
    srand(time(0)); // Seed random for fortunes

    int year;
    cout << "Enter your birth year: ";
    cin >> year;

    string zodiac = getZodiac(year);
    string fortune = getFortune();

    printDragon();
    cout << "\n🎊 Your Chinese Zodiac Sign: " << zodiac << " 🎊" << endl;
    cout << "🧧 Fortune for this year: " << fortune << " 🏮" << endl;

    cout << "\nWishing you happiness, prosperity, and good health in the New Year! 🎆🎇" << endl;

    return 0;
}
