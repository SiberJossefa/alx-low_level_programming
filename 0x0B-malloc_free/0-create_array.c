#include "main.h"
#include <stdlib.h>

/*create_array - create an array of char and initilize it 
 * whith specific char
 * @size: size off array
 * @c: char to assign
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *st;
	unsigned int i;

	st = malloc(size * sizeof(char));

	if (size == 0 || st == NULL)

		return (NULL);

	for (i = 0; i < size; i++)

		st[i] = c;

	return (st);
}
