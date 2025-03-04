#include <iostream>
using namespace std;

// Structure definition for a node in the linked list
struct Node
{
    int data;   // Data stored in the node
    Node *next; // Pointer to the next node in the list
};

// Function to print the linked list
void printList(Node *head)
{
    Node *curr = head;      // Initialize a pointer to traverse the list
    while (curr != nullptr) // Traverse until the end of the list
    {
        cout << curr->data << " ";
        curr = curr->next; // Move to the next node
    }
    cout << endl;
}

int main()
{
    Node *head; // Head pointer to the linked list
    Node *p;    // ❌ Only declares a pointer, does NOT allocate memory to the place that it will point to

    // Creating the first node with value 4
    p = new Node;
    p->data = 4;
    p->next = nullptr; // Last node initially points to nullptr
    head = p;          // Head now points to this first node

    // Creating a second node with value 8 and inserting it at the beginning
    p = new Node;
    p->data = 8;
    p->next = head; // New node points to the previous head (4)
    head = p;       // Update head to the new node (8)

    // Creating a third node with value 2 and inserting it at the beginning
    p = new Node;
    p->data = 2;
    p->next = head; // New node points to the previous head (8)
    head = p;       // Update head to the new node (2)

    Node *newNode = new Node(); // Create new node with data 20
    newNode->data = 20;
    // Find the node with data 8 to insert after
    Node *temp = head;
    while (temp != nullptr && temp->data != 8)
    {
        temp = temp->next;
    }
    // Insert the new node after node with data 8
    if (temp != nullptr)
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }

    printList(head);

    return 0;
}