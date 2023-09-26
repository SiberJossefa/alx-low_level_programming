#include "main.h"
#include <stdio.h>
/**
 * void print_square - prints a square
 * @size: intenger
 */
void print_square(int size)
{
	char a, b;
	
	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
