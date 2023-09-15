#include<stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always
 */

int main(void)
{
	char let;

	for (let = 'z'; let >= 'a'; let--)
		putchar(let);

	putchar('\n');

	return (0);
}
