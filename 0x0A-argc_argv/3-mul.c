#include <stdio.h>
#include <stdlib.h>
/**
 *main - function tha multiplies two numbers
 *@argc: receive parameter intenger
 *@argv: receive parameter string
 *
 * Return: always 0 sucess
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%i\n", a * b);

	return (0);
}
