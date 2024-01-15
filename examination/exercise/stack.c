#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *top = 0;

void push(int el)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = el;
    newnode->link = 0;

    if (top == 0)
    {
        top = newnode;
    }
    else
    {
        newnode->link = top;
        top = newnode;
    }
}

void pop()
{
    if (!top == 0)
    {
        struct node *delEl = top;
        top = top->link;
        printf("\n\nPop Out Element is : %d\n", delEl->data);
        free(delEl);
    }
    else
    {
        printf("\n\nUnder Flow Condition");
    }
}

void peek()
{
    if (!top == 0)
    {
        printf("\n\nTop Most Element of Stack is : %d\n", top->data);
    }
    else
    {
        printf("\n\nStack is Empty");
    }
}

void display()
{
    struct node *tmp = top;

    if (!top == 0)
    {
        printf("\n\nDisplay Function Call\n*******");
        while (tmp != 0)
        {
            printf("\nElement of Stack is : %d", tmp->data);
            tmp = tmp->link;
        };
    }
    else
    {
        printf("\n\nStack Empty");
    }
}

int main()
{
    push(2);
    push(3);
    push(4);
    peek();
    display();
    pop();
    peek();
    display();
    return 0;
}