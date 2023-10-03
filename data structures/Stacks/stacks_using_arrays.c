#include <stdio.h>
#include <stdlib.h>

int MAX, top = -1, value;
int stack[100];
int get_stack_size();
void push(int stack[], int value);
int pop(int stack[]);
int peek(int stack[]);
void display(int stack[]);

int main()
{
    get_stack_size();
    int option;
    do
    {
        printf("\n Main Menu");
        printf("\n 1. Create");
        printf("\n 2. Push");
        printf("\n 3. Pop");
        printf("\n 4. Peek");
        printf("\n 5. Display");
        printf("\n 6. Exit");
        printf("\n Enter option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\n");
            for (int i = 0; i < MAX; i++)
            {
                printf("Enter element %d: ", i + 1);
                scanf("%d", &stack[i]);
                top++;
            }
            break;
        case 2:
            printf("\n Enter value to be pushed: ");
            scanf("%d", &value);
            push(stack, value);
            break;
        case 3:
            value = pop(stack);
            if (value != -1)
            {
                printf("\n Value deleted is: %d", value);
            }
            break;
        case 4:
            value = peek(stack);
            if (value != -1)
            {
                printf("\n The top value is: %d", value);
            }
            break;
        case 5:
            printf("\n Current stack is: ");
            display(stack);
            break;
        default:
            break;
        }
    } while (option != 6);
}

int get_stack_size()
{
    printf("\n Enter number of elements in stack: ");
    scanf("%d", &MAX);
    return MAX;
}

void push(int stack[], int value)
{
    if (top == MAX - 1)
    {
        printf("\n Stack Overflow!");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

int pop(int stack[])
{
    if (top == -1)
    {
        printf("\n Stack Underflow!");
        return -1;
    }
    else
    {
        value = stack[top];
        top--;
        return value;
    }
}

int peek(int stack[])
{
    if (top == -1)
    {
        printf("\n Stack is Empty!");
    }
    else
    {
        return stack[top];
    }
}

void display(int stack[])
{
    if (top == -1)
    {
        printf("\n Stack is Empty!");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("\n %d", stack[i]);
            printf("\n");
        }
    }
}
