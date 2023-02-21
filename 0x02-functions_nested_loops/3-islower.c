#include "main.h"

/**
 *_islower - Function that prints 1 if c is lowercase
 *           includes numbers between 97 and 122
 *
 *Return: 1 for lowercase i.e. ASCII 97 to 122, 0 otherwise
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
