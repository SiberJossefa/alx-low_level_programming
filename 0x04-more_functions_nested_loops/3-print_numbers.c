#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Function that prints numbers from 0 to 9
 * @i: intenger
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
