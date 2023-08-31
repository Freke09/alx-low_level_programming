#include "main.h"

/**
* _puts_recursion - A function that prints a string followed by a new line
* @s: The string array
* Return: Always 0
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}

	_putchar(*s);

	_put_recursion(s + 1);

	_ptchar('\n');
}
