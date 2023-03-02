#include "main.h"

/**
 *reverse_array - Reverses and array
 *@a: array with n integers
 *@n: number of elements in array
 *
 *Return: the reversed array
 */

void reverse_array(int *a, int n)
{
int temp = 0, i;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}

return;
}
