#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - prints all the numbers of base 16 in lower case
 *
 *Return: 0 success
 */
int main(void)
{
char cNumbers;
char cCharacter;
for (cNumbers = '0'; cNumbers <= '9'; cNumbers++)
{
putchar(cNumbers);
}
for (cCharacter = 'a'; cCharacter <= 'f'; cCharacter++)
{
putchar(cCharacter);
}
putchar('\n');
return (0);
}
