/* Exploring_func.c: Exploring functions in C*/

#include <stdio.h>

// This function adds two integers and prints out the result
int integer_add(int x, int y)
{
    int result;
    result = x + y;
    return result;
}

main()
{
    int sum;
    sum = integer_add(5,75);
    printf("The addition of 5 and 75 is %d. \n", sum);
    return 0;
}