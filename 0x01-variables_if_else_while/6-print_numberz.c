#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * A program that prints all singler digits of base ten
 * using int and putchar only
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}
