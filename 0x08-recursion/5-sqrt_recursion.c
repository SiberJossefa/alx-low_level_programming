#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: is a natural number
 * Return: -1 if sqrt dont haver a natural number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}

/**
 * Natural_sqrt_recursion - to find natural square
 * @i: intenger
 * @n: intenger
 * Return: natural square
 */
int _sqrt(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i < n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
