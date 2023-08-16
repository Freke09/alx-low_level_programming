#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* main - check the code
* Return: Always 0
*/

void print_alphabet_x10(void)
{
	int j;

	for (j = 1; j <= 10; j++)
	{
		char i = 'a';

		for (i <= 'z')
		{
			_putchar(i);
			i++;
		}
a	_putchar('\n');
	}
}

int main(void)
{
	print_alphabet_10();

	return (0)
}
