#include <stdio.h>
/**
 * main - print 1 to 100 and fizzbuss
 *
 * return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i  % 3  == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3  == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", i);
		}
	}	
	printf("Buzz");
	printf("\n");
		return (0);
	
}
