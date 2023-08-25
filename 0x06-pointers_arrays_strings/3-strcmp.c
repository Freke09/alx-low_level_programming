#include "main.h"

/**
* _strcmp - A function that compares two strings
* @s1: First string array
* @s2: Second string array
* Return: Always 0
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0, i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			a = 1;
			break;
		}
	}

	if (a == 1)
	return (a);
}
