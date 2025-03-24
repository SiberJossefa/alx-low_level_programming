#include"main.h"
/**
 *_abs - print absolute value
 *@a: intenger
 *
 *Return: Absolute Value
 */
int _abs(int a)
{
	if (a < 0)
	{
	int abs_val;

	abs_val = a * -1;

	return (abs_val);
	}
	return (a);
}
