#include <stdio.h>


int main(){
    int int_num1, int_num2, int_num3;
    float flo_num1, flo_num2, flo_num3;

    int_num1 = 31 / 10;
    flo_num1 = 31 / 10;
    int_num2 = 32.0 / 10;
    flo_num2 = 32.0 / 10;
    int_num3 = 32 / 10.0;
    flo_num3 = 32 / 10.0;

    printf("The interger divs of 31/10 is: %d\n", int_num1);
    printf("The floating divs of 31/10 is: %f\n", flo_num1);
    printf("The interger divs of 32.0/10 is: %d\n", int_num2);
    printf("The floating divs of 32.0/10 is: %f\n", flo_num2);
    printf("The interger divs of 32/10.0 is: %d\n", int_num3);
    printf("The floating divs of 32.0/10,0 is: %f\n", flo_num3);





    return 0;
}