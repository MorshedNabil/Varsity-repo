/// insert an item in a sorted linked list ///
#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    // constructor
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void add(Node* &tail, int val)
{
    Node* temp = new Node(val);
    tail->next = temp;
    tail = temp;
    return;
}

void print(Node* &head)
{
    Node* temp = head;
    int count = 0;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    cout << endl;
    cout << "Items: " << count << "\n";
}

Node* findLocation(Node* &head, int val)
{
    Node* Loc = NULL;

    if(head == NULL)
        return Loc = NULL;
    else if(val < head->data)
        return Loc = NULL; // if the item is smaller than the first node then item will be inserted at 1st pos

    Node* curr = head;
    Node* ptr = head->next;

    while(ptr != NULL)
    {
        if(ptr->data == val)
        {
            Loc = curr;
            return Loc;
        }
        else if(ptr->data < val)
        {
            curr = ptr;
            ptr = ptr->next;
        }
        else
        {
            Loc = curr;
            return Loc;
        }
    }
    Loc = curr; /// if the loop ends and nothing returns then the given item is bigger than all other items in the l.l
                // so we have to return the last node's location, which is pointed by curr node
    return Loc;
}

void insertAtPosition(Node* &head, Node* &Loc, int val)
{
    Node* m = new Node(val);
    if(Loc == NULL)
    {
        m->next = head->next; // insert at 1st position as returned value of loc is null
        head = m;
    }
    else
    {
        m->next = Loc->next; /// else insert the m node after the returned location
        Loc->next = m;
    }
    return;
}


int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    int val;

    add(tail, 12);
    add(tail, 13);
    add(tail, 15);

    cout << "Enter the value you want to insert: ";
    cin >> val;

    Node* Loc = findLocation(head, val);
    insertAtPosition(head, Loc, val);
    print(head);

    return 0;
}