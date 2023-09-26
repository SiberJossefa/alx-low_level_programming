#include "main.h"
#include <stdio.h>
/**
 * print_triangle - print triangle whit n dimension
 * @size: integer
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - (i + 1))
				{
					putchar(' ');
				}
				else
				{
					putchar('#');
				}
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}


