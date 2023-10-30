#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        cout << "Node with value " << this->data << " deleted " << endl;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    // cout << "Inside Get length" << endl;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    // cout << "Length is" << len << endl;
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;

        return;
    }
    else
    {
        Node *newNode = new Node(data);

        tail->next = newNode;

        newNode->prev = tail;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (head = NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;

        return;
    }

    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    int len = getLength(head);
    if (position >= len)
    {
        insertAtTail(head, tail, data);
        return;
    }

    int i = 1;
    Node *prevNode = head;
    while (i < position - 1)
    {
        prevNode = prevNode->next;
        i++;
    }
}

void deleteFromPos(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "Linked list is empty";
        return;
    }
    if (head->next == NULL)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    int len = getLength(head);
    if (position > len)
    {
        cout << "Please enter a valid position" << endl;
        return;
    }

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }

    if (position == len)
    {
        // delete last node
        Node *temp = tail;
        head = head->next;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
    }

    // Dlete from middle

    // step 1 find left curr right

    int i = 1;
    Node *left = head;
    while (i < position - 1)
    {
        left = left->next;
        i++;
    }
    Node *curr = left->next;
    Node *right = curr->next;

    left->next = right;
    right->prev = left;
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}

// Reverse a linked list

Node *reverse(Node *&prev, Node *&curr)
{
    if (curr == NULL)
    {
        return prev;
    }

    // !=1case solve then recurision will take care
    Node *forward = curr->next;
    curr->next = prev;

    reverse(curr, forward);
}

int main()
{

    Node *first = new Node(10);
    Node *second = new Node(11);
    Node *third = new Node(12);

    Node *head = first;
    Node *tail = third;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    // print(head);
    // cout << endl;
    insertAtHead(head, tail, 101);

    print(head);
    cout << endl;

    insertAtTail(head, tail, 501);

    print(head);
    cout << endl;

    deleteFromPos(head, tail, 1);

    print(head);

    // For reversing
    Node *prev = NULL;
    Node *curr = head;
    head = reverse(prev, curr);
    cout << endl;
    print(head);
    cout << endl;

    return 0;
}