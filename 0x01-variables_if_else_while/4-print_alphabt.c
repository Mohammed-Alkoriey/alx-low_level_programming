#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - prints all alphabet in lowercase except q and e
 *
 *Return: 0 success
 */
int main(void)
{
char cCharacter;
for (cCharacter = 'a'; cCharacter <= 'z'; cCharacter++)
{
if (cCharacter == 'q' || cCharacter == 'e')
{
continue;
}
putchar(cCharacter);
}
putchar('\n');
return (0);
}
