#include<stdio.h>
#include<stdlib.h>

int main(){

    int* ptr;
    int n;

    printf("Enter Number of Element: ");
    scanf("%d", &n);
    printf("\nEnter Total Number of Element: %d", n);


    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("\nMemory is not Allocated");
        return 0;
    }
    else
    {
        printf("\nMemory is Allocated || DONE");
        for(int idx = 0; idx < n; idx++)
        {
            ptr[idx] = idx + 1;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nElement of Array: %d", ptr[i]);
    }
    
    return 0;

}
