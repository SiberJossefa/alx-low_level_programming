#include "main.h"
/**
 * print_array - print n elements of an array
 * @a: pointer to array
 * @n: is the number of elements of array
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
		printf("%i", a[j]);
	}
	if (j == (n - 1))
	{
		printf("%i", a[n - 1]);
	}
	print("\n");
}
