#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* print_alphabet - Make the alphabet
* A function that print the alphabets in lowercase
* Return: return void always (Success)
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
