#include "main.h"

/**
* print_sign - a function to print the sign of a number
* @n: this is the sign whose number will be printed
* Return: 1 if the number > 0, 0 if number is 0, and - if nimber < 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}

}
