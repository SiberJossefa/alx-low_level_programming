#include"main.h"

/**
 *_isalpha - checks if a character is an alphabet (lowecase or uppercase)
 *@c: Character
 *
 *Return: 1 for Aplhabetic or 0 for anything
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
