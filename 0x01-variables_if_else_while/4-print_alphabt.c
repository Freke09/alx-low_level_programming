#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * A program that prints all the alphabets in lowercase except e and q
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		if (alphabets != 'e')
		if (alphabets != 'q')

		putchar(alphabets);
		alphabets++;

	}

	putchar('\n');

	return (0);

}
