#include<stdlib.h>
#include<time.h>
/* more headers goes there */
#include<stdio.h>

/**
 *The function main it prints positive_or_negative.c
 *
 * AUTHOR: Jossefa Alberto Muchanga
 * return: 0 always
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
}
