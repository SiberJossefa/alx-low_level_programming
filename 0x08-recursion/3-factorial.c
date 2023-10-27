#include "main.h"
/**
 * factorial -  gets factorial of a given number n
 * @n: number to return the factorial
 *
 * Return: on sucess 1, return -1 if n is lower than 0
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
