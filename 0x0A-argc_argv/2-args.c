#include <stdio.h>
/**
 * main - starting point of the program
 *
 * @argc: argument count
 * @argv: argument values
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
