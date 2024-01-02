#include <stdio.h>

void main()
{

    // Declear a Variable's
    int myArr[50], size, position, deleteItem;

    // Ask to the user how many element in the array he want
    printf("\nEnter Number of Element of Array : ");
    scanf("%d", &size);

    if (size >= 50)
    {
        printf("Error: Out of size Array is [50]. ");
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

    // Ask to the user which position of value he wanna to delete
    printf("\n\nEnter a Position for Delete a value : ");
    scanf("%d", &position);
    position--;

    if (position > size || position < 0)
    {
        printf("Error: Overflow Position Number of Element in Array is : %d.", size);
        return;
    }

    // Delete a Element At specific Position

    // Method 1 : For Unshorted Array
    // myArr[position] = myArr[size - 1];
    // size--;

    // Method 2 : For Shifting Aproch
    deleteItem = myArr[position];
    for (int idx = position; idx < (size - 1); idx++)
    {
        myArr[idx] = myArr[idx + 1];
    }
    size--;

    // Display Array Element
    printf("\n\nElement of Array\n***************\n");
    for (int idx = 0; idx < size; idx++)
    {
        printf("\nValue of [%d] => %d", idx, myArr[idx]);
    }

    printf("\n\nDeleted Element ==> index is [%d] value is : %d.",position,deleteItem);
}