#include "main.h"
#include <stdio.h>
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	char i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
			putchar((j / 10) + '0');
			}
			putchar((j % 10) + '0');
		}
		putchar('\n');
	}
}
