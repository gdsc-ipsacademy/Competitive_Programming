#include <iostream>
using namespace std;

#define n 100 // Define the maximum size of the stack

template <typename T>
class stack
{
private:
    T *arr;  // Pointer to dynamically allocated array to hold stack elements
    int top; // Index of the top element

public:
    stack()
    {
        // Constructor: Initialize the stack
        arr = new T[n]; // Allocate memory for the stack
        top = -1;      // Initialize top to -1 to indicate an empty stack
    }

    void push(T x)
    {
        // Push an element onto the stack
        if (top == n - 1)
        {
            cout << "Stack is Full" << endl; // Check if the stack is full
            return;                          // Return without pushing if it's full
        }
        top++;       // Increment the top index
        arr[top] = x; // Place the element at the top of the stack
    }

    void pop()
    {
        // Pop an element from the stack
        if (top == -1)
        {
            cout << "Stack is Empty" << endl; // Check if the stack is empty
            return;                           // Return without popping if it's empty
        }
        top--; // Decrement the top index to remove the top element
    }

    int stacktop()
    {
        // Get the top element of the stack
        if (top == -1)
        {
            cout << "stack is empty" << endl; // Check if the stack is empty
            return -1;                         // Return -1 to indicate an empty stack
        }
        return arr[top]; // Return the top element of the stack
    }

    int stackBottom()
    {
        // Get the bottom element of the stack
        if (top == -1)
        {
            cout << "stack is empty" << endl; // Check if the stack is empty
            return -1;                         // Return -1 to indicate an empty stack
        }
        return arr[0]; // Return the bottom element of the stack
    }

    bool isEmpty()
    {
        // Check if the stack is empty
        if (top == -1)
        {
            return true; // Return true if the stack is empty
        }
        return false; // Return false if the stack is not empty
    }

    bool isFull()
    {
        // Check if the stack is full
        if (top == n - 1)
        {
            return true; // Return true if the stack is full
        }
        return false; // Return false if the stack is not full
    }
};

int main()
{
    // Main function where we demonstrate the stack operations

    // Creating a stack with integer type
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    // Get the top element in the stack and print it
    cout << "Top element in integer stack: " << s.stacktop() << endl;

    // Creating a stack with char type
    stack<char> ss;
    ss.push('a');
    ss.push('b');

    // Get the top element in the stack (will give ASCII value) and print it
    cout << "Top element in character stack (ASCII value): " << ss.stacktop() << endl;

    return 0;
}
