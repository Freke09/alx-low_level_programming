#include "main.h"

/**
* print_most_numbers - A function that prints numbers from 0 to 9
* but omits 2 and 4
* Return: void
*/

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
	if (!(i == '2' || i == '4'))
		_prutchar(i);
	}

	_putchar('\n');

}
