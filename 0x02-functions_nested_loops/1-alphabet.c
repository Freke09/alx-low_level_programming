#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* main - Entry point
* A function that print the alphabets in lowercase
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char a = 'a';
	
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');

}
