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
   
	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');
	putchar('\n');

	return (0);
}
