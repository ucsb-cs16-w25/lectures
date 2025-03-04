#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// Function to create a new node with a given value
Node *createNode(int value)
{
    Node *newNode = new Node; // Dynamically allocate memory for a new node
    newNode->data = value;    // Assign the given value to the node
    newNode->next = nullptr;  // Initialize next pointer to nullptr (default for the last node)
    return newNode;           // Return the newly created node
}

void printList(Node *head)
{
    Node *curr = head;
    while (curr != nullptr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;
    Node *newNode;

    newNode = createNode(4);
    head = newNode;

    newNode = createNode(8);
    newNode->next = head;
    head = newNode;

    newNode = createNode(2);
    newNode->next = head;
    head = newNode;

    printList(head);

    return 0;
}