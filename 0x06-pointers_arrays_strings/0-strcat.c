#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _strcat - a function that concatenates two strings
* @dest: destination string array
* @src: source string array
* Return: Character
*/

char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\n')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}
