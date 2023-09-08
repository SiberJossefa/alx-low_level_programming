#include<stdio.h>
#include<stdlib.h>

/*
 * Print_Alphabt.c
 * Author Jossefa Muchanga
 */
int main(void)
{
	char let;
	for (let='a';let<='z';let++)
	{
		if(let!='e' && let!='q')
			putchar(let);
	}
	putchar('\n');
	return (0);
}
