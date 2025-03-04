#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// Function to create a new node and insert it at the beginning of the list
Node *createNode(Node *head, int value)
{
    Node *p = new Node; // Dynamically allocate memory for a new node
    p->data = value;    // Assign the given value to the node
    p->next = head;     // Point the new node to the current head (previous first node)
    return p;           // Return the new node as the new head
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
    Node *head = nullptr; // Initialize head to nullptr

    head = createNode(head, 4);
    head = createNode(head, 8);
    head = createNode(head, 2);

    printList(head);

    return 0;
}