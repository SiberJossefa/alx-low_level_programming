#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
 * main - prints the sum of all positive numbers
 * @argc: argument
 * @argv: argument
 *
 * Return: 0 sucess, 1 otherwise
 */
int main(int argc, char *argv[])
{
	char *p;
	int s;

	if (argc - 1 == 0)
	{
		printf("0\n");
	}
	s = 0;
	argv++;
	while (*argv)
	{
		p = *argv;

		while (*p)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
			p++;
		}
		s += atoi(*argv++);
	}
	printf("%i\n", s);
	return (0);
}
