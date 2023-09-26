#include "main.h"
/**
 * rev_string - revese a string
 * @s: pointer to char
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int con = 0;
	int i;

	while (s[con] != '\0')
		con++;
	for (i = 0; i < con; i++)
	{
		con--;
		reverse = s[i];
		s[i] = s[con];
		s[con] = reverse;
	}
}
