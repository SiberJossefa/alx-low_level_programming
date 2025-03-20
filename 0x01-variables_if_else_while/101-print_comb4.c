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
	int l;
	int cont = 1;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (l = j + 1; l <= 9; l++)
			{
				if (cont == 0)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i + '0');
				putchar(j + '0');
				putchar(l + '0');
				cont = 0;
			}
		}
	}
	putchar('\n');

	return (0);
}
