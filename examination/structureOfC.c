// Documentation Section
/* file Name:
   Author Name:
   Creation Date & Time:
   Description:
*/

// Preprocessor Section
#include <stdio.h>

// Defination Section
#define X 10

// Global Declaration Section
int sum (int y);

// Main Function
int main(){
    int y = 1;
    printf("%d", sum(y));
    return 0;
}

// Sub Programls

int sum(int y){
    return y + X;
}
