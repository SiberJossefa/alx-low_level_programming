#include "main.h"
/**
 * _isdigit - Function that check c is digit or not
 * @c: intenger
 * Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
