#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

// void prepend(Node *head, int value) // head is passed by value, meaning that any changes made inside prepend() do not reflect in main()
// {
//     Node *newNode = createNode(value);
//     newNode->next = head; // ❌ This only modifies the local copy of `head`, not the actual head in `main()`
//     head = newNode;
// }

void prepend(Node *&head, int value) // ✅ Pass by reference
{
    Node *newNode = createNode(value);
    newNode->next = head;
    head = newNode; // ✅ Now head in main() is updated
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
    prepend(head, 4);
    prepend(head, 8);
    prepend(head, 2);

    printList(head);

    return 0;
}