#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * creat_aray - A function that creates an array of chars,
 * and initializes it with a specific char
 * @size: the integer size
 * @c: The character to be initialized
 * Return: A pointer
 */

char *create_array(unsigned int size, char c);
{
	if (size == 0)
	{
		return (NULL);
	}

	char *myArray;

	myArray = char *malloc(size * sizeof(char));

	if (myArray == NULL)
	{
		return (NULL);
	}

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		myArray[i] = c;
	}

	return (myArray);

}
