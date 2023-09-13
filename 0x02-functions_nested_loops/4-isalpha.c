#include"main.h"

/**
*_Isalpha - Cheks
*Return: 1 for Aplhabetic or 0 for anything
*/

int _isalpha(int c)
{
	if ((c>=65 && c <=97) || (c>=97 && c <=122))
	{
	return (1);
	}
	return (0);
}
