/* Documentation:
file Name: structureOfC
author: Piyush
Description: Find Sum of x & y */

// Link
#include<stdio.h>

// Definition
#define X 30

// Global Declaration
int sum(int y);

// Main Function
int main(){
    int y = 5;
    printf("Sum: %d", sum(y));
    return 0;
}

// Subprogram
int sum(int y){
    return y + X;
}
