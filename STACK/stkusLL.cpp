#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

// Push operation
void push(int value)
{
    if (top == MAX - 1)
        cout << "Stack Overflow" << endl;
    else
    {
        top++;
        stack[top] = value;
    }
}

// Pop operation
int pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
        return -1;
    }

    return stack[top--];
}

// Display stack
void display()
{
    for (int i = top; i >= 0; i--)
        cout << stack[i] << " ";
    
    cout << endl;
}

// Reverse stack
void reverseStack()
{
    int temp[MAX];
    int tempTop = -1;

    // Pop elements from original stack
    while (top != -1)
    {
        tempTop++;
        temp[tempTop] = pop();
    }

    // Copy elements back
    for (int i = 0; i <= tempTop; i++)
    {
        push(temp[i]);
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    cout << "Original Stack: ";
    display();

    reverseStack();

    cout << "Reversed Stack: ";
    display();

    return 0;
}