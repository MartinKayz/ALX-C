#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always returns 0 (Success)
 *
 */

int main(void)
{
	int ch;

	printf("Please type in one character:\n");
	ch = getc(stdin);
	printf("The character you just entered is: %c\n", ch);
	return (0);
}

