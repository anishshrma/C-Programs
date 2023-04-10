//program to push and pop a element in a stack

#include <stdio.h>
#include <stdlib.h>
#define size 5
int top = -1, stack[size];
void push();
void pop();
void main()
{
    int choice;
    do
    {
        printf("1.push the element in stack\n");
        printf("2.pop the element\n");
        printf("any other number to exit\n");
        printf("enter the choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        default:
            exit(1);
        }

    } while (choice == 1 || choice == 2);
}
void push()
{
    if (top == size - 1)
    {
        printf("Stack is full");
    }
    else
    {
        printf("enter the value");
        top = top + 1;
        scanf("%d", &stack[top]);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("under flow\n");
    }
    else
    {
        printf("poped element is:%d", stack[top]);
        top = top - 1;
    }
}
