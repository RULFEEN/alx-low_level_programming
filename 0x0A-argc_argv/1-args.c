#include <stdlib.h>
#include <stdio.h>

/**
 *main - function that returnes number of arguments
 *@argc: number of arguments plus name of program
 *@argv: array of all arguments
 *
 *Return: Success (0)
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
printf("%d\n", (argc - 1));
return (0);
}
