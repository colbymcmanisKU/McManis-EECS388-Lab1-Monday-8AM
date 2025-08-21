#include <stdio.h>  // correct header

int main()010
{
    int myNum;
    
    printf("Type a number: \n");
    scanf("%d", &myNum);
    printf("You typed: %d\n", myNum);

    return 0; // good practice
}
