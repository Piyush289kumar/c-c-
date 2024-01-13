/* Stack Using Array */

#include<stdio.h>

int N = 5;
int stack[5];
int top = -1;


void push(int x){
    
    // printf("\nEnter Element: ");
    // scanf("%d",&x);

    if (top == N - 1)
    {
        printf("\nOverFlow Condition");
    }
    else
    {
        top++;
        stack[top] = x;
    }
    
}

void pop(){
    if (top == -1)
    {
        printf("\nUnderFlow Condition");
    }
    else
    {
        int delEl = stack[top];
        top--;
        printf("\nDeleted Element is : %d", delEl);
    }
    
}

void peek(){
    if (top == -1)
    {
        printf("\nStact is Empty");
    }
    else
    {
        printf("\nTop most Element is : %d", stack[top]);
    }
    
}


void display(){
    if (top == -1)
    {
        printf("\nStact is Empty");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("\nElement of Stack [%d] : %d",i, stack[i]);
        }
        
    }
    
}


int main(){

    push(6);
    push(4);
    push(2);
    push(7);
    push(8);
    // pop();
    peek();
    display();
    return 0;
}