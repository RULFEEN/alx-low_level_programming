#include "main.h"

/**
 *print_remaining_days - prints the remianing days in a year
 *
 *@month: the month of date
 *@day: the day of current date
 *@year: the year
 *
 *Return: void return
 */

void print_remaining_days(int month, int day, int year)
{
if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
if (month > 2 && day >= 60)
{
day++;
}

printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
if (month <= 2 && day >= 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}
