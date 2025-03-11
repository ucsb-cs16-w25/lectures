#include <iostream>
using namespace std;

// Definition of the Node structure for a doubly linked list
struct Node
{
    string data; // Data stored in the node
    Node *next;  // Pointer to the next node
    Node *prev;  // Pointer to the previous node
};

// Definition of the LinkedList structure
struct LinkedList
{
    Node *head = nullptr; // Head of the list, initially null
    Node *tail = nullptr; // Tail of the list, initially null
};

// Function to create a new node with given string data
Node *createNode(string value)
{
    Node *newNode = new Node; // Allocate new node
    newNode->data = value;    // Set data
    newNode->next = nullptr;  // Next node is null
    newNode->prev = nullptr;  // Previous node is null
    return newNode;
}

void printList(LinkedList ll)
{
    for (Node *n = ll.head; n != nullptr; n = n->next)
    {
        cout << n->data << " -> ";
    }
    cout << "nullptr" << endl;
}

void printListBackwards(LinkedList ll)
{
    Node *curr = ll.tail;
    while (curr != nullptr)
    {
        cout << curr->data << "->";
        curr = curr->prev;
    }
    cout << "nullptr" << endl;
}

void addTail(LinkedList &ll, string data)
{
    Node *n = createNode(data);
    if (ll.head == nullptr)
    {
        // If the list is empty, head and tail point to new node
        ll.head = n;
        ll.tail = n;
    }
    else
    {
        // Link new node to current tail and update tail
        n->prev = ll.tail;
        ll.tail->next = n;
        ll.tail = n;
    }
}

void addHead(LinkedList &ll, string data)
{
    Node *n = createNode(data);
    if (ll.head == nullptr)
    {
        // If the list is empty, head and tail point to new node
        ll.head = n;
        ll.tail = n;
    }
    else
    {
        // Link new node before current head and update head
        ll.head->prev = n;
        n->next = ll.head;
        ll.head = n;
    }
}

void removeTail(LinkedList &ll)
{
    if (ll.tail == nullptr)
        return; // If list is empty, do nothing

    Node *toDelete = ll.tail; // Node to delete
    ll.tail = ll.tail->prev;  // Update tail to previous node

    if (ll.tail != nullptr)
    {
        ll.tail->next = nullptr; // Remove old tail's next link
    }
    else
    {
        ll.head = nullptr; // If list becomes empty, update head too
    }

    delete toDelete; // Free the memory of the old tail node
}

int main()
{
    LinkedList ll;

    // Add elements to the list
    addHead(ll, "head1");
    addTail(ll, "tail1");
    addHead(ll, "head2");
    addTail(ll, "tail2");

    // Print the list forwards and backwards
    cout << "Forward print:" << endl;
    printList(ll);

    cout << "Backward print:" << endl;
    printListBackwards(ll);

    // Remove tail and print the list forwards again
    removeTail(ll);
    cout << "After removing tail, forward print:" << endl;
    printList(ll);

    return 0;
}