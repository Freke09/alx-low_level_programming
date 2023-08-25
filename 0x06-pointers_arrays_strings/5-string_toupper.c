#include "main.h"
#include <ctype.h>

/**
* string_toupper - A function that changes all lowercase of a string
* to uppecase
* @a: The input string
* Return: Pointer to the string
*/

char string_toupper(char *a)
{
	char *i = a;

	while (*i)
	{
		*i = toupper(*i);
		*i++;
	}

	return (a);

}

