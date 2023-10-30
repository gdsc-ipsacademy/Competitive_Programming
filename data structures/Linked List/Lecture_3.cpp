#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

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

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *getMiddle(Node *&head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty";
        return head;
    }
    if (head->next == NULL)
    {
        return head;
    }

    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

Node *reverseKNodes(Node *&head, int k)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return NULL;
    }
    int len = getLength(head);

    if (k > len)
    {
        // cout << "Enter valid value for k" << endl;
        return head;
    }

    // it meand numbers of nodes in ll is >= k
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;

    int count = 0;
    while (count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // Step B: recursiv call
    if (forward != NULL)
    {
        head->next = reverseKNodes(forward, k);
    }

    // step 3: return head of  reversed link
    return prev;
}

bool checkForLoop(Node *&head)
{
    if (head == NULL)
    {
        return false;
    }
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

Node *findStarting(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (slow == fast)
        {
            slow = head;
            break;
        }
    }

    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

Node *removeLoop(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (slow == fast)
        {
            slow = head;
            break;
        }
    }
    Node *prev = fast;
    while (slow != fast)
    {
        prev = fast;

        slow = slow->next;
        fast = fast->next;
    }

    prev->next = NULL;

    return slow;
}

int main()
{

    Node *head = new Node(11);
    Node *second = new Node(12);
    Node *third = new Node(13);
    Node *fourth = new Node(14);
    Node *fifth = new Node(15);
    Node *sixth = new Node(17);
    Node *seventh = new Node(18);
    Node *eight = new Node(20);
    Node *ninth = new Node(21);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eight;
    eight->next = ninth;
    ninth->next = fifth;

    // print(head);

    // cout << "Middle node of the linked list is  " << getMiddle(head)->data << endl;

    // print(head);
    // head = reverseKNodes(head, 3);
    cout << "Loop is present or not " << checkForLoop(head) << endl;
    cout << "Starting point of loop is : " << findStarting(head)->data << endl;

    removeLoop(head);
    cout << "Loop is removed now";
    print(head);
    cout << "Again checking for loop : " << checkForLoop(head) << endl;

    return 0;
}