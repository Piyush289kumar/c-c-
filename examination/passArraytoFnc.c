#include<stdio.h>

int sum(int myArray[]){
    for (int i = 0; i < 5; i++)
    {
        printf("%d", myArray[i]);
    }
    return 0;
}

int main(){  
    int myArry[] = {1,2,3,4,5};  
    sum(myArry);
    return 0;
}