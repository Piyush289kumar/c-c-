#include<stdio.h>


int printArr(int myArr[], int size){
    for (int idx = 0; idx < size; idx++)
    {
        printf("%d\n", myArr[idx]);
    }
    return 0;
}

int main(){
    int arr[4] =  {1,2,3,4};
    int sizeOfArry = 4;
    printArr(arr,sizeOfArry);
    return 0;
}
