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
int days_in_feb = 28;
int days_in_year = 365;

if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
days_in_feb = 29;
days_in_year = 366;
}

/*day = convert_day(month, day);*/

if (days_in_feb == 29 && month > 2)
{
day += 1;
}

printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", days_in_year - day);
return;
}
