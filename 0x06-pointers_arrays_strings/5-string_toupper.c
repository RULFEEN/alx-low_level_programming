#include "main.h"

/**
 *string_toupper - function that converts lowercase to uppercase
 *@str: The string containing lowercase letters
 *
 *Return: The string
 */

char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - ('a' - 'A');

i++;
}

return (str);
}
