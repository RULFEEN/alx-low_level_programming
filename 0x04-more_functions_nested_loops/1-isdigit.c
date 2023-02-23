#include "main.h"

/**
 *_isdigit - Function that checks if character is a digit
 *
 *@c: a character
 *Return: 1 if digit, ) otherwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
