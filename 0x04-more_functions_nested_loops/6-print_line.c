#include "main.h"
#include <stdio.h>
/**
 * print_line - draws a straight line in the terminal
 * @n: intenger
 */
void print_line(int n)
{
	char j;

	for (j = 0; j < n; j++)
	{
		putchar('_');
	}
	putchar('\n');
}
