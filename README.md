# Single Linked List Stack Implementation

This C++ program implements a stack data structure using a singly linked list. It provides functionalities to push and pop elements, check the top element, and manage the size and emptiness of the stack.

## Features

- **Push Operation**: Add an element to the top of the stack.
- **Pop Operation**: Remove the top element from the stack.
- **Top Operation**: Retrieve the top element without removing it.
- **Size Operation**: Get the number of elements in the stack.
- **Empty Check**: Determine if the stack is empty.
- **Print Stack**: Display all elements in the stack.

## Usage

1. **Push**:
   - Use `push(T d)` to add a new element `d` to the top of the stack.

2. **Pop**:
   - Use `pop()` to remove the top element from the stack.

3. **Top**:
   - Use `top(T &d)` to get the value of the top element without removing it. If the stack is empty, it returns `false`.

4. **Size**:
   - Use `size()` to get the total number of elements in the stack.

5. **Check Empty**:
   - Use `isEmpty()` to check if the stack has no elements.

6. **Print**:
   - Use `print()` to display all elements in the stack from top to bottom.

### Example

In the given code:

- Elements are pushed onto the stack in the order: 10, 20, 30, 40.
- The size of the stack is displayed.
- The top element is retrieved and printed.
- The top element is popped, and the new top element is displayed.
- The current state of the stack is printed.

**Output**:
```plaintext
4
0
40
30
30 20 10 
