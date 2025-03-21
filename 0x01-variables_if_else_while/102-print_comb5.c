#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int cont = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = i + 1; l <= 9; l++)
				{
					if (cont == 0)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					cont = 0;
				}
			}
		}
	}
		putchar('\n');

		return (0);
}
