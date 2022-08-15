#include <stdio.h>

int main()
{
    char ch1, ch2;
    ch1 = 'Z';
    ch2 = 'z';

    printf("The numeric value of Character %c is %d \n.",ch1, ch1);
    printf("The numeric value of Character %c is % d \n.", ch2, ch2);

    int a = 72;
    int b = 104; 

    printf("The corresponding characters for the int %d is: %c \n", a,a);
    printf("The corresponding characters for the int %d is: %c \n", b,b);

    double dbl_num = 123.456;
    printf("The floating point version is: %f and the scientific notation is: %e \n", dbl_num, dbl_num);

    return 0;
}