#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int number;

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');

	return (0);
}
