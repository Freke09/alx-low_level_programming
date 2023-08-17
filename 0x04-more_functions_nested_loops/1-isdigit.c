#include "main.h"

/**
* _isdigit - Checks if a character is a digit between (0 through 9)
* @c: the character being checked
* Return: 1 if it is a digit, 0 otherwis 
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
