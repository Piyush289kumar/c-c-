#include<stdio.h>

void main(){
    int a[50], size, i;

    printf("Enter size of Array ==> ");
    scanf("%d", &size);
    printf("Enter Element of Array ==> ");
    for (i = 0; i < size; i++)
    {
        printf("\nElement index of [%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("Enterted Element's are\n****************************");

    for (i = 0; i < size; i++)
    {
        printf("\nElement of Array No. %d ==> %d", i, a[i]);
    }
    
    
}