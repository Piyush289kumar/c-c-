#include <stdio.h>
#include <stdlib.h>

// User Define Data Structer or Data type
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = 0;
struct node *tail = 0;

void push(int el)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = el;
    newnode->prev = newnode->next = 0;

    if (head == 0 && tail == 0)
    {
        head = tail = newnode;
        newnode->next = newnode->prev = newnode;
    }
    else
    {
        head->prev = newnode;
        tail->next = newnode;
        newnode->prev = tail;
        newnode->next = head;
        tail = newnode;
    }
}

void pop()
{
    if (!head == 0)
    {
        struct node *temp = head;
        head = head->next;
        head->prev = tail;
        tail->next = head;
        printf("\n\nPop Element of Linked List is : %d", temp->data);
        free(temp);
    }
    else
    {
        printf("\n\nLinked List is Empty");
    }
}

void peek()
{
    if (!head == 0)
    {
        printf("\n\nTop Most Element is : %d", head->data);
    }
    else
    {
        printf("\n\nLinked List is Empty");
    }
}

void display()
{
    if (!head == 0)
    {
        struct node *temp = head;
        do
        {
            printf("\n\nLinked List Element Value is : %d", temp->data);
            temp = temp->next;
        } while (!(temp == head));
    }
    else
    {
        printf("\n\nLinked List is Empty");
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    peek();
    display();
    pop();
    peek();
    display();
    return 0;
}