#include "main.h"
/**
 *print_sign - prints the sign of any number
 *@n: intenger number
 *
 *Return: 1 if n is great than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	} 
	else
	{
		_putchar('0');
		return (0);
	}
}
