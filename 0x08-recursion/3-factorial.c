#include "main.h"
/**
 * factorial -  gets factorial of n
 * @n: number to return the factorial
 *
 * return: on sucess 1, return -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
