#include "main.h"
/**
 * void times_table - function that prints the 9 times table, starting with 0
 *
 * Return: 0 always
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		k = 0;
		for (j = 0; j <= 9; j++)
		{
			_putchar(j * i + '0');
				if (k < 9)
				{
					_putchar(',');
					_putchar('  ');
					k++;
				}
		}
		_putchar('\n');
	}

	return (0);
}
