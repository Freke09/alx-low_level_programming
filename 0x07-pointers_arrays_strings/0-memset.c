#include "main.h"

/**
* _memset - A function that fills memory with constant byte
* @s: Pointer
* @b: Value that will fill the n memory adress
* @n: The size of the array
* Return: Pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i; /* Subscript to the array s */

	if (n == 0)
		return (s);

	*s = 'b';

	return (_memset(s + 1, b, n - 1));

}
