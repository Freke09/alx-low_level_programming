#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* print_alphabet_x10 - Make alphabet 10 times
* Return: Always 0
*/

void print_alphabet_x10(void)
{
	int i = 1;
	char j;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
