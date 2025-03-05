#include <iostream>
#include <vector>
using namespace std;

class Tweet
{
public:
    // Constructor to initialize a tweet with a user ID and optional content
    Tweet(string who, string new_content = "");

    // Method to edit the content of the tweet
    void edit_content(string new_content);

    // Method to increase the like count of the tweet
    void add_like();

    // Method to display the tweet's details
    void show_tweet();

private:
    string userid;  // User ID of the tweet's author
    string content; // Content of the tweet
    int likes;      // Number of likes the tweet has
    bool edited;    // Flag to indicate if the tweet has been edited
};

// Constructor implementation
Tweet::Tweet(string who, string new_content)
{
    userid = who;
    content = new_content;
    likes = 0;      // Initialize likes to 0
    edited = false; // Initialize edited flag to false
}

// Edit tweet content
void Tweet::edit_content(string new_content)
{
    content = new_content;
    edited = true; // Mark tweet as edited
}

// Increment like count
void Tweet::add_like()
{
    likes += 1;
}

// Display tweet details
void Tweet::show_tweet()
{
    cout << "Tweet by " << userid << endl;
    cout << content << endl;
    if (edited)
        cout << "Updated" << endl; // Show "Updated" if tweet was edited
    cout << "Likes: " << likes << endl;
}

class User
{
public:
    // Constructor to initialize a user with a given ID
    User(string name);

    // Method to add a tweet to the user's list of tweets
    void add_tweet(string post);

    // Method to display all tweets by the user
    void display_page();

private:
    string userid;
    vector<Tweet> tweets; // Vector of tweets by the user
};

// User constructor
User::User(string name)
{
    userid = name;
}

// Add a new tweet
void User::add_tweet(string post)
{
    Tweet newTweet(userid, post); // Create a new Tweet object
    tweets.push_back(newTweet);   // Add it to the vector of tweets
}

// Display user's tweet page
void User::display_page()
{
    for (Tweet t : tweets)
    {                   // Iterate over each tweet
        t.show_tweet(); // Display tweet details
    }
}

int main()
{
    User user1("user1");             // Create a User object
    Tweet t("User1", "Hello");       // Create a Tweet object
    t.show_tweet();                  // Display initial tweet
    t.edit_content("Good morning!"); // Edit tweet content
    t.add_like();                    // Add a like
    t.add_like();                    // Add another like
    t.show_tweet();                  // Display updated tweet

    // User1 adds three tweets
    user1.add_tweet("How are you?");
    user1.add_tweet("Have a nice day!");
    user1.add_tweet("Goodbye!");

    cout << "---------------" << endl;

    user1.display_page(); // Display all of User1's tweets

    return 0;
}