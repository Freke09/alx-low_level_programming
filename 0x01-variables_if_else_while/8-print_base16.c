#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * A program to print all the base 16 numbers in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num1 = '0';
	char num2 = 'a';

	while (num1 <= '9')
	{
		putchar(num1);
		num1++;
	}

	while (num2 <= 'f')
	{
		putchar(num2);
		num2++;
	}

	putchar('\n');

	return (0);

}

