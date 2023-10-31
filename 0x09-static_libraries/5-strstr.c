#include "main.h"
/**
 * strstr - entry point
 * @haystack: input
 * @needle: input
 * return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *p = needle;

		while (*k == *p && *p != '\0')
		{
			k++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
