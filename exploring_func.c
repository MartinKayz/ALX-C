/* Exploring_func.c: Exploring functions in C*/

#include <stdio.h>

// This function adds two integers and prints out the result
int integer_add(int x, int y)
{
    int result;
    result = x + y;
    return result;

}int interger_prod( int x, int y)
{
    int product;
    product = x * y;
    return product;
}



main()
{
    int sum;
    int mult;
    sum = integer_add(5,75);
    printf("The addition of 5 and 75 is %d. \n", sum);
    mult = interger_prod(4,90);
    printf("The multiplication of 4 and 90 is %d. \n", mult);
    return 0;
}


