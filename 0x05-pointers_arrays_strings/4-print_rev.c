#include "main.h"
/**
 * print_rev - print in reverse
 * @s: string
 *return: 0
 */
void print_rev(char *s)
{
	int l = 0;
	int d;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (d = l; d > 0; d--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
