#include "main.h"

/**
* string_toupper - A function that changes all lowercase of a string
* to uppecase
* @a: The input string
* Return: Pointer to the string
*/

char string_toupper(char *a)
{
	int i;

	i = 0;

	while (*(a + i))
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
		{
			*(a + i) -= 'a' - 'A';
			i++;
		}
	}

	return (a);


}
