// #include<stdio.h>

// int main(){

//     int let1 = 10;
//     int let2 = 20;
//     int let3 = 30;

//     int* prArry[] = {&let1, &let2, &let3};


//     for(int idx = 0; idx < 3; idx++){
//         printf("let%d Value: %d\t Address: %p\n",idx, *prArry[idx], prArry[idx]);
//     }

//     return 0;
// }


#include<stdio.h>

int fun(int a){
    printf("Value of a: %d", a);
    return 0;
}
int main(){

    int (*fnc)(int) = &fun;

    (fnc)(10);

    return 0;
}