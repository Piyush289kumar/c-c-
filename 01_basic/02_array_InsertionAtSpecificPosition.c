#include <stdio.h>

int main()
{

    // Create a Variable's
    int myArry[50], size, position, inputNum;

    // Get Number of Element in Array
    printf("Enter How Many Element in the Array ==> ");
    scanf("%d", &size);

    // Condition to check Array is overflow or not
    if (size > 50)
    {
        printf("Array Overflow Error\nArray size is 50\nPlease Give Array size under & equal to 50");
    }
    else
    {

        // Insert Input Number in Array
        printf("Enter Element of Array\n*****************");
        for (int i = 0; i < size; i++)
        {
            printf("\nEnter Element of Array index : myArray[%d] ==> ", i);
            scanf("%d", &myArry[i]);
        }

        // Display Array
        printf("\n\nYour Array Element as following");
        for (int idx = 0; idx < size; idx++)
        {
            printf("\nElement of Array index [%d] => %d", idx, myArry[idx]);
        }

        // Get Position Where User wanna to insert element of a array
        printf("\n\nEnter a Position where you wanna insert a element : ");
        scanf("%d", &position);
        position--;

        if (position > size || position <= 0)
        {
            printf("\nError : Invalid Array Position\n Array Size is : %d", size);
        }
        else
        {

            // Get Element that are inserted
            printf("\nEnter Element that you wanna to Insert : ");
            scanf("%d", &inputNum);

            // Method 1: Start
            // Shift the value of the array
            // for (int idx = size; idx >= position; idx--)
            // {
            //     myArry[idx + 1] = myArry[idx];
            // }
            // Method 1: End

            // Method 2: Start
            myArry[size] = myArry[position];


            // Insert Element At Specific Postion & Increment Array size
            size++;
            myArry[position] = inputNum;

            // Display Array
            printf("\nYour Array Element as following");
            for (int idx = 0; idx < size; idx++)
            {
                printf("\nElement of Array index [%d] => %d", idx, myArry[idx]);
            }
        }
    }

    return 0;
}