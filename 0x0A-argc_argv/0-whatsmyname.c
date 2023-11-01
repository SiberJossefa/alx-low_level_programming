#include <stdio.h>
#include <stdlib.h>
/**
 *main - function that prints my name
 *@argc: receive parameter intenger
 *@argv: receive parameter string
 *
 * Return: always 0 sucess
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
