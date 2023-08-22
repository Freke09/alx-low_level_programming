#include "main.h"
#include <stdio.h>

/**
* print_rev - a function that prints a string in reverse
* @s: the string variable
*/

void print_rev(char *s)
{
	int a, b;

	b = 0;
	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');

}
