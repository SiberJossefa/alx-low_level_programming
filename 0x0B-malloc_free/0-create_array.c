#include "main.h"

/*create_array - create arry of char
 * @size: size off array
 * @c: char to assign
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *st;
	unsigned int i;

	st = malloc(sizeof(char) * size);
	if (size == 0 || st == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		st[i] = c;
		return (st);
	}
}
