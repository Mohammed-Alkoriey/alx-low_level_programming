#include <stdio.h>
#include <stdlib.h>

/**
 * main - starting point of the program
 *
 * @argc: argument count
 * @argv: argument values
 * Return: 0
 */

int main(int argc, char *argv[])
{
if (argc == 3)
{
int iNum1, iNum2, iMul;

iNum1 = atoi(argv[1]);
iNum2 = atoi(argv[2]);
iMul = iNum1 *iNum2;

printf("%d\n", iMul);
}
else
{
printf("Error\n");
}
return (0);
}
