/* Question 2: Print Array after it is right rotated K times. */

#include<stdio.h>

void main(){

    int myArray[5] = {1,2,3,4,5}, k;

    printf("\nRotation Times : ");
    scanf("%d", &k);

    // Logic
    for (int idx = 0; idx < k; idx++)
    {
        int tempVariable = myArray[5 - 1];
        
        // Shift Element
        for (int idx = 4; idx > 0; idx--)
        {
            myArray[idx] = myArray[idx-1];
        }
        myArray[0] = tempVariable;
        
    }

    // Display Array Element
    for (int idx = 0; idx<5; idx++)
    {
        printf("%d, ", myArray[idx]);
    }
    
    
}