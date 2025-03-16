#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 always
 */
int main(void)
{
	char num = 0;
	char let = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (let <= 'f')
	{
		putchar(let);
		let++;
	}
	putchar('\n');

	return (0);
}
