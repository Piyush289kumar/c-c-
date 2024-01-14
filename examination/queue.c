#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *front = 0;
struct node *rear = 0;

void enqueue(int el)
{

    struct node *newnode = 0;
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
};

void dequeue()
{
    if (front == 0 && rear == 0)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        struct node *temp = front;
        front = front->link;
        printf("\nDeleted Element of Queue is : %d", temp->data);
        free(temp);
    }
}

void display()
{
    if (front == 0 && rear == 0)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        struct node *temp = front;

        while (temp != 0)
        {
            printf("\nData Part : %d\n", temp->data);
            temp = temp->link;
        }
    }
}

void peek()
{
     if (front == 0 && rear == 0)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        printf("\nTop Most Element of Queue is : %d", front->data);
    }
}

int main()
{
    enqueue(8);
    enqueue(5);
    enqueue(2);
    enqueue(6);
    enqueue(1);
    display();
    peek();
    dequeue();
    display();
    peek();
    return 0;
}