#include "3-calc.h"

/**
 * main - the starting point of the program
 * @argc: the number of the arguments
 * @argv: an array of strings to the argumentd
 * Return: 0
 */
int main(int argc, char *argv[])
{
int (*func)(int, int);
int firstNum, lastNum, result;
if (argc != 0 && argc == 4)
{
firstNum = atoi(argv[1]);
lastNum = atoi(argv[3]);

func = get_op_func(argv[2]);
if (func == NULL)
{
printf("Error\n");
exit(99);
}

result = func(firstNum, lastNum);
printf("%d\n", result);
}
return (0);
}
