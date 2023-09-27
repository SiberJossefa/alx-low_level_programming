#include "main.h"
/**
 * _memset - fills a block with specific value
 * @s: char buffer
 * @b: char
 * @n: integer
 * return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j;

	j = 0;
	for (j = 0; j < n; j++)
	{
		s[j] = b;
		n--;
	}

	return (s);
}
