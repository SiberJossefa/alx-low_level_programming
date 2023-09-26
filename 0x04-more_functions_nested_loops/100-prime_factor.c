#include <stdio.h>
/**
 * main - print the largest prime factor of the number 612852475143
 * return - 0
 */
int main(void)
{
	unsigned long  a, b, c;

	b = 612852475143;
	for (a = 1; a < b; a++)
	{
		if (b % a == 0)
		{
			if (b == a)
			{
				printf("%lu\n", a);
				break;
			}
			c = b / a;
			b = c;
		}
	}

	return (0);
}
