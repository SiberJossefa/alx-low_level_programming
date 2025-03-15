#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		putchar(let);
		let++;
	}
	putchar('\n');

	return (0);
}
