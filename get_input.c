/** Reading input from the user using getc() **/

#include <stdio.h>

/**
  * main - Reads a file stream stdin
  * Return: Always 0
  *
  */
int main()
{
	int ch;

	printf("Please type in one character: \n");
	ch = getc( stdin );
	printf("The Character you just entered is: %c\n", ch);
	return (0);
}

