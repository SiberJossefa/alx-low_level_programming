#include"main.h"
/**
 * main - entry point
 *
 * Return: 0 always
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
