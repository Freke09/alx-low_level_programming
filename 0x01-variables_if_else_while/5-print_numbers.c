#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * A program that prints all the single numbers in base ten
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		printf("%d", number);
		number++;
	}

	printf("\n");

	return (0);

}
