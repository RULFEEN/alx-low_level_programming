#include "main.h"

/**
 *cap_string - Capitalizes all letters at beginning of string
 *             and after separators
 *@str: string
 *Return: the string str
 */

char *cap_string(char *str)
{
int i = 0;

if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - ('a' - 'A');

while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{

if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] = str[i + 1] - ('a' - 'A');
}
i++;
}

return (str);

}
