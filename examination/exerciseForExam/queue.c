#include <stdio.h>
#include <stdlib.h>

// User Define Data Structer or Data type
struct node
{
    int data;
    struct node *link;
};

struct node *front = 0;
struct node *rear = 0;

void push(int el)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = el;
    newnode->link = 0;

    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->link = newnode;
        rear = newnode;
    }
}

void pop()
{
    if (!front == 0)
    {

        struct node *temp = front;
        front = front->link;
        printf("\n\nPop Element is : %d", temp->data);
        free(temp);
    }
    else
    {
        printf("\n\nQueue is Empty");
    }
}

void peek()
{
    if (!front == 0)
    {
        printf("\n\nTop Most Element is : %d", front->data);
    }
    else
    {
        printf("\n\nQueue is Empty");
    }
}

void display()
{
    if (!front == 0)
    {

        struct node *temp = front;

        while (!temp == 0)
        {
            printf("\nQueue Element is : %d", temp->data);
            temp = temp->link;
        }
    }
    else
    {
        printf("\n\nQueue is Empty");
    }
}

int main()
{
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);
    peek();
    display();
    pop();
    peek();
    display();
    return 0;
}