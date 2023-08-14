#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * A program that prints all possible combination of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1, num2;

	for (num1 = '0'; num1 <= '8'; num1++)
	{
	
	for (num2 = '0'; num2 <= '9'; num2++)
	{
	
	if (num1 < num2)
	
	{
		putchar(num1);
		putchar(num2);
		
		if (num1 != '8' || num2 != '9')
	{
		putchar(',');
		putchar(' ');
	}
	
	}
	
	}
	
	}
	
	putchar('\n');

	return (0);

}
