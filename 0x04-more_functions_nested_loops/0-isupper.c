#include "main.h"

/**
 *_isupper - Function that checks if a number is uppercase
 *
 *@c: a character
 *Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
