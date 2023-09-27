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
	int r = 0;
	int i = n;
	
	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
