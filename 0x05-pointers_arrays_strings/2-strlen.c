#include "main.h"
/**
 * _strlen - computes the  length of a string
 * @s: string
 * return: length of a string;
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
