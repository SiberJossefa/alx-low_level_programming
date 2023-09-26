#include "main.h"
/**
 * puts_half - prints half of string follwed by a new line
 * @str: pointer to char
 */
void puts_half(char *str)
{
	int b;
	int n;
	int l;

	l = 0;
	for (b = 0; str[b] != '\0'; b++)
		l++;
	n = (l / 2);
	if ((l % 2) == 1)
		n = ((l + 1) / 2);
	for (b = n; str[b] != '\0'; b++)
		putchar(str[b]);
	putchar('\n');
}
