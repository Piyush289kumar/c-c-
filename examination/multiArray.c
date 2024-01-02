#include <stdio.h>

int main()
{

    int myArray[50][50];

    // input
    for (int idx = 0; idx < 3; idx++)
    {
        for (int ite = 0; ite < 3; ite++)
        {
            scanf("%d", &myArray[idx][ite]);
        }
    }


     // output
    for (int idx = 0; idx < 3; idx++)
    {
        for (int ite = 0; ite < 3; ite++)
        {
            printf("%d\t", myArray[idx][ite]);
        }
        printf("\n");
    }


    return 0;
}