#include "main.h"
/**
 * _memcpy - copie n bytes from memory are src to memory area dest
 * @dest: char buffer
 * @src: char buffer
 * @n: intenger
 * return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	if (!src[i])
		dest[i] = '\0';

	return (dest);
}
