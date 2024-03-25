#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 * @str: pointer to string
 * Return: returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *b;
	int i, a = 0;

	if (str == NULL)

		return (NULL);

	i = 0;

	while (str[i] != '\0')

		i++;

	b = malloc(sizeof(char) * (i + 1));

	if  (b == NULL)

		return (NULL);

	for (a = 0; str[a]; a++)

	b[a] = str[a];

	return (b);
}
