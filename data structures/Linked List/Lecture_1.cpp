#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        cout << "Node with value:" << this->data << "deleted" << endl;
    }
};

int findLegth(Node *&head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    cout << "Calculation the length :" << len << endl;

    return len;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
        cout << endl;
    }
}

// for insertin node at the head of linked list
void insertAtHead(Node *&head, Node *&tail, int data)
{

    // step 1:
    Node *newNode = new Node(data);

    // step :
    newNode->next = head;

    // step 3:
    if (head == NULL)
    {
        tail = newNode;
    }
    head = newNode;
}

// inserting at end

void insertAtTail(Node *&head, Node *&tail, int data)
{

    Node *newNode = new Node(data);

    if (tail == NULL)
    {
        // first node add hone wlai h

        tail = newNode;
        head = newNode;
    }

    else
    {
        tail->next = newNode;
    }
    tail = newNode;
}

void insertAtPosition(int data, int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step 1

    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }
    int len = findLegth(head);
    if (position >= len)
    {
        insertAtTail(head, tail, data);
        return;
    }

    int i = 1;

    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }

    Node *curr = prev->next;

    // step 2;

    Node *newNode = new Node(data);

    // step 3
    newNode->next = curr;

    // step 4

    prev->next = newNode;
}

// Deleting code

void deleteNode(int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "Cannnot delte LL is empty";
        return;
    }

    // Deleting first Node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next == NULL;
        delete (temp);
    }

    int len = findLegth(head);

    // Deleting last node
    if (position == len)
    {
        int i = 1;
        Node *prev = head;

        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }

        prev->next = NULL;

        Node *temp = tail;

        tail = prev;

        delete (temp);
        return;
    }

    // Deletin any node given in parameter

    int i = 1;
    Node *prev = head;
    while (i < position - 1)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;

    prev->next = curr->next;

    curr->next == NULL;

    delete curr;
};

int main()
{

    // Node *first = new Node(11);
    // Node *second = new Node(12);
    // Node *third = new Node(13);
    // Node *fourth = new Node(14);
    // Node *fifth = new Node(15);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    // fifth->next = NULL;

    // print(first);

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 21);
    insertAtHead(head, tail, 22);
    insertAtHead(head, tail, 23);
    insertAtTail(head, tail, 120);

    // print(head);

    // cout << "head ::" << head->data << endl;
    // cout << "tail::" << tail->data << endl;
    // insertAtPosition(500, 5, head, tail);

    // print(head);
    // cout << endl;

    // cout << "head:: " << head->data << endl;
    // cout << "tail::" << tail->data << endl;

    print(head);

    deleteNode(3, head, tail);

    print(head);
    return 0;
}