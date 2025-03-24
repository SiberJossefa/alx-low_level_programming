#include"main.h"
/**
 *print_alphabet_x10 - print in lowercase
 *
 * Return: always nothing(void)
 */
void print_alphabet_x10(void)
{
	char ch;
	int j = 0;

	while (j < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);
		}
		_putchar('\n');
		j++;
	}
}
