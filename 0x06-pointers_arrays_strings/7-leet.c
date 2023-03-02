#include "main.h"

/**
 *leet - Entry point to leet function
 *
 *@str: string
 *Return: pointer to altered string
 */

char *leet(char *str)
{
char *p = str;
char *leet_chars = "AaEeOoTtLl";
char *leet_nums = "44330711";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_chars[j] != '\0'; j++)
{
if (str[i] == leet_chars[j])
{
str[i] = leet_nums[j];
break;
}
}
}

return (p);
}
