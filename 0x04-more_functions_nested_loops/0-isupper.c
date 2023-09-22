#include "main.h"
i
/**
 * _isupper - checks wether a c is uppercase or not
 * @c - intenger
 *
 * Return - 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
