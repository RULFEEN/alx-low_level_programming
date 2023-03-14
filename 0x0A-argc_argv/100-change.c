#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints minimum number of coins
 *@argc: number of arguments
 *@argv: string of arguments
 *
 *Return: o if success, 1 if error
 */

int main(int argc, char **argv)
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
int cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
int coins = 0;
coins += cents / 25;
cents %= 25;
coins += cents / 10;
cents %= 10;
coins += cents / 5;
cents %= 5;
coins += cents / 2;
cents %= 2;
coins += cents / 1;
cents %= 1;

printf("%d\n", coins);
return (0);
}
