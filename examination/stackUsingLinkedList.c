/* Stack Using Linked List */
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = 0;

void push(int el)
{

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = el;
    newnode->next = top;
    top = newnode;
}

void pop()
{
    if (top == 0)
    {
        printf("\n\nStact is Emtpy");
    }
    else
    {
        struct node *temp = top;
        printf("\n\nPOP Element is : %d", top->data);
        top = top->next;
        free(temp);
    }
}
void peek()
{
    if (top == 0)
    {
        printf("\nStact is Empty");
    }
    else
    {
        printf("\n\nTop Most Element of Stack : %d", top->data);
    }
}
void display()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("\nStack is Empty");
    }
    else
    {
        while (temp != 0)
        {
            printf("\nElement : %d\n", temp->data);
            temp = temp->next;
        };
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    peek();
    pop();
    peek();
    display();
    return 0;
}