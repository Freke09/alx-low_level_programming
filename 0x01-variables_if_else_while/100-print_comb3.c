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
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		 for (y = '0'; y <= '9'; y++)
		
		 {
		 	if (x < y)
		 
		 	{
		       		putchar(x);
		 		putchar(y);

		 		if (x != '8' || (a == "8' && y != '9'))
		 		
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
