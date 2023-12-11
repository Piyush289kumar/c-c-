#include <stdio.h>

int main()
{
    int variable = 10;
    int *ptr;
    ptr = &variable;

    printf("\nVariable [value] = %d : ", variable);
    printf("\nVariable [address]= %d : ", &variable);


    printf("\n\nPointer [value] = %d : ", *ptr);
    printf("\nPointer [address] = %d : ", &ptr);
    printf("\nPointer [Without Dereferencing] = %d : ", ptr);

    return 0;
}

/*

                  ptr
        |-----------------------|
  |---> |    0x7fffa0757dd4     |
  |     |-----------------------|
  |           0x7FFF98B499e8       <------------------- Address of Pointer variable ptr
  |
  |
  |               Var
  |     |-----------------------|
  |     |          10           |  <------------------- Value of variable var(*ptr)
  |     |-----------------------|
  |           0x7fffa0757dd4       <------------------- Address of variable var (stored at ptr)
  |  
  |               ^
  |---------------|

*/









