#include <stdio.h>

void main()
{

    // Variables
    int rowSize, columnSize, myArray[50][50];

    // Ask User the number of Row & Columns
    printf("\nEnter Rows Size : ");
    scanf("%d", &rowSize);
    printf("\nEnter Columns Size : ");
    scanf("%d", &columnSize);

    // Insert Element in 2D Array
    for (int rowIdx = 0; rowIdx < rowSize; rowIdx++)
    {
        for (int colIdx = 0; colIdx < columnSize; colIdx++)
        {
            printf("\nEnter Element of Array Index [%d][%d] : ", rowIdx, colIdx);
            scanf("%d", &myArray[rowIdx][colIdx]);
        }
    }

    // printf("%d %d",);

    // Display Element of 2D Array
    printf("\n\nArray Element\n**************");
    for (int rowIdx = 0; rowIdx < rowSize; rowIdx++)
    {
        for (int colIdx = 0; colIdx < columnSize; colIdx++)
        {
            printf("\nArray Index [%d][%d] ==> %d", rowIdx, colIdx, myArray[rowIdx][colIdx]);
            ;
        }
        printf("\n--------------------");
    }

    // Update Element
    int updateRowNum, updateColNum, inputVal;
    printf("\nRow Number : ");
    scanf("%d", &updateRowNum);
    printf("\nColumn Number : ");
    scanf("%d", &updateColNum);
    printf("\nInput Value : ");
    scanf("%d", &inputVal);

    int tempVariable;
    tempVariable = myArray[updateRowNum][updateColNum];
    myArray[updateRowNum][updateColNum] = inputVal;


    // Display Element of 2D Array
    printf("\n\nUpdated Array Element\n**************");
    for (int rowIdx = 0; rowIdx < rowSize; rowIdx++)
    {
        for (int colIdx = 0; colIdx < columnSize; colIdx++)
        {
            printf("\nArray Index [%d][%d] ==> %d", rowIdx, colIdx, myArray[rowIdx][colIdx]);
            ;
        }
        printf("\n--------------------");
    }

}