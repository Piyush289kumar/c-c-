#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *pre;
    int data;
    struct node *next;
};

struct node *head = 0;
struct node *tail = 0;

void insertion(int value){

struct node *newnode;
newnode = (struct node *)malloc(sizeof(struct node));
newnode->pre = 0;
newnode->data = value;
newnode->next = 0;

if (head == 0)
{
    head = tail = newnode;
    head->next = newnode;
    head->pre = newnode;
}
else
{
    tail->next = newnode;
    newnode->pre = tail;
    tail = newnode;
    tail->next = head;
    head->pre = tail;

}
}
void display(){
    struct node *temp = head;
     
    while (temp->next != head)
    {
        printf("\nValue : %d", temp->data);
        temp = temp->next;
    }
        printf("\nValue : %d", temp->data);
    
    

}

int main(){

    insertion(3);
    insertion(2);
    insertion(1);
    display();
    return 0;
}