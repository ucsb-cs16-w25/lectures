#include <iostream>
#include <vector>
using namespace std;

// Class representing a Tweet
class Tweet
{
public:
    // Method to edit tweet content
    void edit_content(string new_content);

    // Method to add a like to the tweet
    void add_like();

    // Constructor to initialize a Tweet object
    Tweet(string who, string new_content = "");

    // Method to display the tweet
    void show_tweet();

private:
    string userid;  // Stores the user ID of the person who posted the tweet
    string content; // Stores the content of the tweet
    int likes;      // Stores the number of likes on the tweet
    bool edited;    // Indicates whether the tweet has been edited
};

// Constructor implementation
Tweet::Tweet(string who, string new_content)
{
    userid = who;          // Assign the user ID
    likes = 0;             // Initialize likes to zero
    content = new_content; // Assign the tweet content
    edited = false;        // Initially, the tweet is not edited
}

// Method to edit the tweet content
void Tweet::edit_content(string new_content)
{
    content = new_content; // Update tweet content
    edited = true;         // Mark the tweet as edited
}

// Method to increase the like count
void Tweet::add_like()
{
    likes += 1;
}

// Method to display the tweet details
void Tweet::show_tweet()
{
    cout << "Tweet by " << userid << endl;
    cout << content << endl;

    // Display "updated" if the tweet has been edited
    if (edited)
        cout << "updated" << endl;

    // Display the number of likes
    cout << "likes: " << likes << endl;
}

// Class representing a User
class User
{
public:
    // Method to add a new tweet
    void add_tweet(string post);

    // Method to display all tweets of the user
    void display_page();

    // Constructor to initialize a User object
    User(string name);

private:
    string userid;        // Stores the user ID (username)
    string bio;           // Stores the user's bio (currently unused)
    vector<Tweet> tweets; // Stores a collection of tweets by the user
};

// Constructor implementation
User::User(string name)
{
    userid = name; // Assign the user ID (username)
}

// Method to create and add a tweet to the user's tweet collection
void User::add_tweet(string post)
{
    Tweet t(userid, post); // Create a new Tweet object
    tweets.push_back(t);   // Add it to the user's list of tweets
}

// Method to display all tweets of the user
void User::display_page()
{
    // Iterate through the tweets and display them
    for (Tweet t : tweets)
    {
        t.show_tweet();
    }
}

int main()
{
    // Create a user
    User user1("Alice");

    // Add tweets
    user1.add_tweet("Hello, world!");
    user1.add_tweet("Learning C++ is fun!");
    user1.add_tweet("Just had a great cup of coffee.");

    // Display the user's tweets
    cout << "\n=== Alice's Tweets ===" << endl;
    user1.display_page();

    // Simulating tweet editing and liking
    cout << "\n=== Editing and Liking Tweets ===" << endl;

    // Assume user wants to edit the second tweet (index 1)
    // Since tweets are stored in a vector inside the User class, we can't directly edit them.
    // We would need an additional method in the User class to edit a specific tweet.
    // For now, we create a new Tweet object manually and demonstrate editing.

    Tweet t("Alice", "Learning C++ is fun!");
    t.edit_content("Learning C++ is amazing!");
    t.add_like();
    t.add_like();

    // Show edited tweet
    cout << "\nEdited Tweet:\n";
    t.show_tweet();

    return 0;
}
