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
	int l1, l2, i;

	l1 = strlen(dest);
	l2 = strlen(src);

	for (i = 0; i <= l2; i++)
	{
		dest[l1 + i] = src[i];
	}
	dest[l1 + l2] = '\0';

	for (i = 0;  <= l1 + l2; i++)
	{
		_putchar(dest[i]);
	}

	_putchar('\n');

	return (dest);

}
