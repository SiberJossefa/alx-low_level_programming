#include"main.h"
/**
 *_islower - cheks whether a c is lowercase 
 *@c - charater
 *
 *Return: 1 if c is lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
