#include"main.h"
/**
 *_islower - cheks whether a c is lowercase 
 *c - charater
 *
 *Return: 1 charater or 0 anything
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
