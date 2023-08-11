#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - prints all alphabet in lowercase in reverse
 *
 *Return: 0 success
 */
int main(void)
{
char cCharacter;
for (cCharacter = 'z'; cCharacter >= 'a'; cCharacter--)
{
putchar(cCharacter);
}
putchar('\n');
return (0);
}
