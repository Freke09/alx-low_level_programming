#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _strcat - a function that concatenates two strings
* @dest: destination string
* @src: source string
* Return: pointer to the string
*/

char *_strcat(char *dest, char *src)
{
	int l1, l2, i, j;

	l1 = strlen(*dest);
	l2 = strlen(*src);

	for (i = 0; i <= l2; i++)
	{
		*dest[l1 + 1] = *src[i];
	}

	for (i = 0;  <= *dest[i]; i++)
	{
		_putchar(*dest);
	}

	_putchar('\n');

}
