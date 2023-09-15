#include<stdio.h>
#include<stdlib.h>


/*
 * print_alphabets.c
 * AUTHOR: Jossefa Alberto Muchanga
 */

int main(void)
{

	char let;
   
 	for (let = 'a'; let <= 'z'; let++)
		putchar(let);

	for (let = 'A'; let <= 'Z'; let++)
		putchar(let);

	putchar('\n');
   
	return (0);
}
