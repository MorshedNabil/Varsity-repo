//// print all the data items and count the number of data items
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void add(Node *&tail, int val)
{
    Node *temp = new Node(val);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    cout << endl;
    cout << "Items: " << count << "\n";
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    add(tail, 12);
    add(tail, 15);
    add(tail, 22);

    print(head);
    return 0;
}