/* Array => Find out the second largest element */

//Header file
#include<stdio.h>

int main(){

    // variable Define
    int sizeOfArray, myArray[50], firstLargestElement = 0, secondLargestElement = 0, tempVariable;

    // Ask Size of Array
    printf("\nSize of Array : ");
    scanf("%d", &sizeOfArray);

    // Insert Element in Array
    for (int idx = 0; idx < sizeOfArray; idx++)
    {
        printf("\nEnter Element of Index[%d] : ", idx);
        scanf("%d", &myArray[idx]);
    }

    // Display Array Element
    printf("\n\nArray Element : ");
    for (int idx = 0; idx < sizeOfArray; idx++)
    {
        printf("\nArray Element index of[%d] : %d", idx, myArray[idx]);
    }

    // Condition
    for (int idx = 0; idx < sizeOfArray; idx++)
    {
        if (firstLargestElement < myArray[idx])
        {
            tempVariable = firstLargestElement;
            firstLargestElement = myArray[idx];
            secondLargestElement = tempVariable;
        }
        
    }

    // Print Both Largest and Second Largest Element in the Array

    printf("\n\n\nFirst largest Element is ==> %d", firstLargestElement);
    printf("\nSecond largest Element is ==> %d", secondLargestElement);
    

    return 0;
    
}
