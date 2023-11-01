#include <stdio.h>
#include <stdlib.h>
/**
 *main - function thar print the number off arguments
 *@argc: receive parameter intenger
 *@argv: receive parameter string
 *
 * Return: always 0 sucess
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
//	int j;

//	for (j = 0; j <= argc; j++)
//	{
//		printf("%s\n", argv[j]);
		printf("%i\n", argc - 1);
//	}
	return (0);
}
