#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 *main - summing up arguments
 *@argc: number of all arguments
 *@argv: string of all arguments
 *
 *Return: Success (0) or (1)
 */

int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc > 2)
{
for (i = 1; i < argc; i++)
{
if (isdigit(*argv[i]))
sum += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
break;
}
}
printf("%d\n", sum);
return (0);
}

else
{
printf("%d\n", 0);
return (0);
}
}
