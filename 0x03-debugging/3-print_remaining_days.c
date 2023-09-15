#include<stdio.h>
#include "main.h"
/**
*main - takes a date and prints how many days are left in the year, taking
*leap years into account
*return:0
*/
void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && 400 == 0) || (year % 4 == 0)
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
	printf("Day of the year: %i\n", day);
	printf("Remaining days: %i\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02i/%02i/%04i\n", month, day - 31, year);
		}
	else
	{
		printf("Day of the year: %i\n", day);
		printf("Remaing days: %i\n", 365 - day);
	}
	}
}
