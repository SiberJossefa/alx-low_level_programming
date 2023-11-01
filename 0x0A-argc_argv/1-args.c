#include <stdio.h>
#include <stdlib.h>
/**
 *main - function thar print the number off arguments
 *@argc: receive parameter intenger
 *@argv: receive parameter string
 *
 * Return: always 0 sucess
 */
int main(int argc, char *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
