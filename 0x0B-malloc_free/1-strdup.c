#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * _strdup - function that return a pointer
 * to a newly allocated space in memory
 * @str: string to be copy
 *
 * Return - on sucess function return a string duplicated
 */
char *_strdup(char *str)
{
	char *c;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	c = malloc(sizeof(char) * 9);

	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		c[i] = str[i];
	}
	return (c);
}
