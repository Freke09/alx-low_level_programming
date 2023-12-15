#include "main.h"

/**
* set_bit - Sets the value of bit to 1 at a given index
* @n: A pointer
* @index: The index of bit to set
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	*n = *n | mask;

	return (1);
}
