#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n:  intenger
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		if (n > 1)
		{
			for (b = 0; b < a; b++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
		if (n <= 0)
		{
			putchar('\n');
		}
	}
}
