# Stack Data Structure in C++

A stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle. It means that the last element added to the stack is the first one to be removed. Stacks are used in various applications, such as expression evaluation, function call management in programming languages, and undo mechanisms in text editors.

### Basic Operations

The basic operations that can be performed on a stack are as follows:

- **Push**: Adding an element to the top of the stack.
- **Pop**: Removing the top element from the stack.
- **Top**: Retrieving the top element without removing it.
- **isEmpty**: Checking if the stack is empty.
- **isFull**: Checking if the stack is full (for fixed-size stacks).

## Code Explanation

The code in this repository provides a generic stack implementation using C++ templates. It demonstrates the fundamental operations of a stack, including pushing elements onto the stack, popping elements from the stack, and checking for stack properties such as emptiness and fullness.

## Time and Space Complexity

The time complexity of stack operations is typically O(1) because each operation involves constant time regardless of the size of the stack. The push, pop, and top operations take constant time.

The space complexity of a stack depends on the number of elements it holds. For a stack of size N, the space complexity is O(N) as it requires memory to store each element.

## Problems
1. https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1
2. https://practice.geeksforgeeks.org/problems/valid-substring0624/1

## Articles
 - https://www.geeksforgeeks.org/stack-data-structure/
 - https://takeuforward.org/stack/stack-in-data-structure/