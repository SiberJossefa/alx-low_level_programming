#include "main.h"
/**
 * swap_int - swap the values of integer
 * @a: integer swap
 * @b: integer swap
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
