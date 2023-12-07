// Header Files
#include <stdio.h>

// Declear a Variable's
int choose, myArr[50], size, position, inputNum, updatedItem, deleteItem;

// Decleared Functions
void creation()
{
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
}

void insertion()
{
    // Condition to check Array is overflow or not
    if (size > 50)
    {
        printf("Array Overflow Error\nArray size is 50\nPlease Give Array size under & equal to 50");
    }
    else
    {
        // Get Position Where User wanna to insert element of a array
        printf("\n\nEnter a Position where you wanna insert a element : ");
        scanf("%d", &position);

        position--;

        if (position > size || position < 0)
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
            //     myArr[idx + 1] = myArr[idx];
            // }
            // Method 1: End

            // Method 2: Start
            myArr[size] = myArr[position];

            // Insert Element At Specific Postion & Increment Array size
            size++;
            myArr[position] = inputNum;

            printf("\nElement Inserted Sucessfully in Array\n**************\n");
        }
    }
    return;
};

void deletion()
{
    // Ask to the user which position of value he wanna to delete
    printf("\n\nEnter a Position for Delete a value : ");
    scanf("%d", &position);
    position--;

    if (position > size || position < 0)
    {
        printf("Error: Overflow Position Number of Element in Array is : %d.", size);
        return;
    }

    // Storge Deleted Element
    deleteItem = myArr[position];

    // Delete a Element At specific Position

    // Method 1 : For Unshorted Array
    // myArr[position] = myArr[size - 1];
    // size--;

    // Method 2 : For Shifting Aproch
    for (int idx = position; idx < (size - 1); idx++)
    {
        myArr[idx] = myArr[idx + 1];
    }
    size--;

    printf("\nElement Deleted Sucessfully in Array\n**************\n");
    printf("\n\nDeleted Element ==> index is [%d] value is : %d.", position, deleteItem);
    return;
};

void updation()
{
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

    printf("\n\nUpdated Element (Previus Record) ==> index is [%d] value is : %d.", position, updatedItem);

    // Display Array Element
    printf("\nArray is Updated\n**************\n");

    return;
};

void display()
{

    // Display Array Element
    printf("\n\nElement of Array\n***************\n");
    for (int idx = 0; idx < size; idx++)
    {
        printf("\nValue of [%d] => %d", idx, myArr[idx]);
    }
    return;
};

void exitOperation()
{
    printf("\n\nThank You...., Have a nice day");
    return;
};

// Main Program Flow Point
void main()
{

    do
    {
        printf("\n\n0 : Array Creation Operation\n1 : Array Insertion Operation\n2 : Array Updation Operation\n3 : Array Deletion Operation\n4 : Array Display Operation\n5 : Exit");
        printf("\n\nChoose a Option => ");
        scanf("%d", &choose);
        switch (choose)
        {
        case 0:
            creation();
            break;
        case 1:
            insertion();
            break;
        case 2:
            updation();
            break;
        case 3:
            deletion();
            break;
        case 4:
            display();
            break;
        case 5:
            exitOperation();
            break;

        default:
            "Invalid Input Please try again...!!";
            break;
        }

    } while (choose <= 4);
}