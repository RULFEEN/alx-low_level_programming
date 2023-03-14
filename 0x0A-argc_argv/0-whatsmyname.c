#include <stdio.h>
#include <stdlib.h>

/**
 *main - function that prints executable file name
 *@argc: number of arguments on command line
 *@argv: array of strings containing arguments
 *
 *Return: Success (0)
 */

int main(int argc, char *argv[])
{

if (argc >= 1)
printf("%s\n", argv[0]);

return (0);
}
