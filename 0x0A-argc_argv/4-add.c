#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _isdigit - checks for digit 0 through 9
 * @c: the digit
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}


/**
 * main - starting point of the program
 *
 * @argc: argument count
 * @argv: argument values
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int iAdd = 0, i;
	long unsigned int x;
	if (argc == 1){
		printf("%d\n", 0);
	}else if(argc > 1){
		for (i = 0; i < argc; i++){
			for (x = 0; x < strlen(argv[i]); x++){
				if(isdigit(argv[i + x]) == 0){
					printf("Error\n");
					return (1);
				}
			}
			iAdd += atoi(argv[i]);
		}
		printf("%d\n", iAdd);
	}
	return (0);
}
