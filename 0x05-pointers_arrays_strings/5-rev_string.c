#include "main.h"
#include <stdio.h>

/**
* rev_string - a function to reverse string
* @s: the string variable
* Return: Always 0
*/

void rev_string(char *s)
{
	int a = 0, b, c;
	char x;

	while (s[a] != '\0')
	{
		a++;
	}

	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		x = s[b];
		s[b] = s[c];
		s[c] = x;
	}
}
