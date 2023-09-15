#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		putchar(let);
	putchar('\n');

	return (0);
}
