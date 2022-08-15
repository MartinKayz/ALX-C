// Printing Characters to the Screen
#include <stdio.h>

main()
{
    char ch1;
    char ch2;
    char ch3, ch4;

    ch1 = 'A';
    ch2 = 'a';

    ch3 = 65;
    ch4 = 97;

    printf("The value of ch1 to character: %c. \n", ch1);
    printf("The value of ch2 to character: %c. \n", ch2);

    // Converting numeric back to Characters
    printf("The character that has a numeric value of 65 is: %c .\n",ch3);
    printf("The character thas has a numeric value of 87 is: %c .\n", ch4);


    return 0;
}