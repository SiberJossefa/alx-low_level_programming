#include "main.h"
/**
 * _strpbrk - locates the first ocurrence in the string s of
 * the bytes in the string accept
 * @s: pointer to char buffer
 * @accept: pointer to char bytes
 * return: a ponter to the bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	
	return ('\0');
}
