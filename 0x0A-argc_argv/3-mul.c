#include <stdlib.h>
#include <stdio.h>

/**
 *main - multiplies arguments
 *@argc: number of all arguments
 *@argv: string of arguments
 *
 *Return: Success (0), or Error (1)
 */

int main(int argc, char *argv[])
{
int prod;
if (argc == 3)
{
prod = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", prod);
return (0);
}

else
{
printf("Error\n");
return (1);
}
}
