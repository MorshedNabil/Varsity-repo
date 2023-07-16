#include <iostream>
using namespace std;


class Node
{
public:
    int info;
    Node *next;

    Node(int val)
    {
        info = val;
        next = NULL;
    }
};
Node *loc = NULL;
Node *locp = NULL;
void add(Node *&tail, int val)
{
    Node *temp = new Node(val);
    tail->next = temp;
    tail = temp;
    return;
}

void print(Node *&head)
{
    Node *temp = head; // it is the node which will traverse the l.l and print the data of the nodes
    int count = 0;

    while (temp != NULL)
    {
        cout << temp->info << " ";
        temp = temp->next;
        count++;
    }
    cout << endl;
    cout << "Items: " << count << "\n";
}

void dlt(Node *&loc, Node *&locp, Node *&head, int item)
{
    if (loc = NULL)
    {
        cout << "Nothing to delete. Linked List is empty.\n";
        return;
    }
    else if (locp == NULL) // to dlt the node if it is at first of the l.l
    {
        locp->next = head->next;
        head = locp;
    }
    else
    {
        locp->next = loc->next; /// dlt the node
    }
}

void findTheLoc(Node *&head, int item)
{

    if (head == NULL) /// if so item is in the l.l then nothing left to dlt
    {
        loc = locp = NULL;
        return;
    }
    else if (head->info == item) /// if item is found in the first node
    {
        loc = head;
        locp = NULL;
        return;
    }
    else
    {
        Node *ptr;
        Node *curr;
        ptr = head->next; // it is pointing to the 2nd node
        curr = head;      // it is pointing to the 1st node

        while (ptr != NULL)
        {
            if (ptr->info == item)
            {
                loc = ptr;   // return the loc where we will find the give item to dlt
                locp = curr; // return the loc of the previous item
                return;
            }
            else
            {
                ptr = ptr->next; /// item didn't found? then go forward of the l.l
                curr = ptr;
            }
        }
    }
    loc = NULL; // if the loop runs and traverse the whole l.l and can't find the item
    return;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    

    add(tail, 12);
    add(tail, 13);
    add(tail, 15);

    findTheLoc(head, 13);
    dlt(loc, locp, head, 13);

    print(head);

    return 0;
}