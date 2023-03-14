#include <stdlib.h>
#include <stdio.h>

/**
 *main - prints all arguments
 *@argc: number of all arguments
 *@argv: string of arguments
 *
 *Return: Success (0)
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (0);
}
