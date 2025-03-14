#include <iostream>
using namespace std;

// Structure representing a single node in the linked list
struct Node
{
    int data;   // Stores the data of the node
    Node *next; // Pointer to the next node in the list

    // Constructor to initialize a node with a value
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList
{
private:
    Node *head; // Pointer to the first node in the linked list
    // Practice: Add the tail node and develop methods for it
    Node *tail;

public:
    LinkedList() : head(nullptr) {} // Constructor initializes an empty list
    ~LinkedList();                  // Destructor to free memory

    void append(int newValue); // Function to add a new node at the end
    void display();            // Function to print the linked list
    void remove(int value);    // Function to remove a node with a given value
};

// Function to insert a new node at the end of the list
void LinkedList::append(int newValue)
{
    Node *newNode = new Node(newValue); // Create a new node with given value

    if (!head) // If list is empty, set new node as head
    {
        head = newNode;
        return;
    }

    Node *curr = head;
    while (curr->next != nullptr) // Traverse to the last node
    {
        curr = curr->next;
    }
    curr->next = newNode; // Append new node at the end
}

// Function to remove a node with a given value from the list
void LinkedList::remove(int value)
{
    if (!head) // If the list is empty, do nothing
        return;

    // If the head node is the one to be removed
    if (head->data == value)
    {
        Node *temp = head;
        head = head->next; // Move head to the next node
        delete temp;       // Delete old head
        return;
    }

    Node *curr = head;
    while (curr->next && curr->next->data != value) // Find the node before the one to delete
    {
        curr = curr->next;
    }

    // If the node was found, delete it
    if (curr->next)
    {
        Node *temp = curr->next;
        curr->next = curr->next->next; // Bypass the node to delete
        delete temp;                   // Free memory
    }
}

// Function to display the linked list elements
void LinkedList::display()
{
    if (!head) // Check if the list is empty
    {
        cout << "The list is empty" << endl;
        return;
    }

    Node *curr = head;
    while (curr)
    {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

// Destructor to free allocated memory
LinkedList::~LinkedList()
{
    while (head) // Iterate through the list and delete each node
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    LinkedList ll;

    ll.append(10);
    ll.append(20);
    ll.append(30);
    ll.append(40);
    ll.display();

    ll.remove(20);
    ll.display();

    return 0; // When `ll` goes out of scope, ~LinkedList() will be called automatically
}