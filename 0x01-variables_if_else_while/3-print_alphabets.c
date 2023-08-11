#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - prints all alphabet in lowercase
 *
 *Return: 0 success
 */
int main(void)
{
char cCharacter;
for (cCharacter = 'a'; cCharacter <= 'z'; cCharacter++)
{
putchar(cCharacter);
}
for (cCharacter = 'A'; cCharacter <= 'Z'; cCharacter++)
{
putchar(cCharacter);
}
putchar('\n');
return (0);
}
