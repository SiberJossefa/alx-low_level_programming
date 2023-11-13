#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size - intenger number of bytes to multiple
 * @c: charater to initilize array
 *
 * Return - NULL if size is 0, and adress of pointer
 */
char *create_array(unsigned int size, char c)
{
	char *vector;
	unsigned int i;

	vector = malloc(sizeof(char) * size);

	if (size == 0 || vector == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		vector[i] = c;
	}
	return (vector);
}
