#include "main.h"
/**
 * puts2 - prints every other charater of  string
 * starting with the first charr
 * @str: input
 */
void puts2(char *str)
{
	int l = 0;
	int a = 0;
	char *p = str;
	int b;

	while (*p != '\0')
	{
		p++;
		l++;
	}
	a = l - 1;
	for (b = 0; b <= a; b++)
	{
		if (b % 2 == 0)
		{
			putchar(str[b]);
		}
	}
	putchar('\n');
}
