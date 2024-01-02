#include <stdio.h>

void main()
{

    // Declear a Variable's
    int myArr[50], size, position, inputNum, updatedItem;

    // Ask to the user how many element in the array he want
    printf("\nEnter Number of Element of Array : ");
    scanf("%d", &size);

    if (size >= 50 || size < 0)
    {
        printf("Error: Size Array is [50]. ");
        return;
    }

    // Insert Element in a Array
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter Value of Array Index [%d] : ", i);
        scanf("%d", &myArr[i]);
    }

    // Display Array Element
    printf("\n\nElement of Array\n***************\n");
    for (int idx = 0; idx < size; idx++)
    {
        printf("\nValue of [%d] => %d", idx, myArr[idx]);
    }

    // Ask to the user which position of value he wanna to Update
    printf("\n\nEnter a Position for Update a value : ");
    scanf("%d", &position);
    position--;

    if (position > size || position < 0)
    {
        printf("Error: Overflow Position Number of Element in Array is : %d.", size);
        return;
    }

    // Ask to the user which value he wanna to Update
    printf("\n\nEnter a Value : ");
    scanf("%d", &inputNum);

    // Update a Element At specific Position

    // Method 1 :
    updatedItem = myArr[position];
    myArr[position] = inputNum;

    // Display Array Element
    printf("\n\nElement of Array\n***************\n");
    for (int idx = 0; idx < size; idx++)
    {
        printf("\nValue of [%d] => %d", idx, myArr[idx]);
    }

    printf("\n\nUpdated Element (Previus Record) ==> index is [%d] value is : %d.",position,updatedItem);
}