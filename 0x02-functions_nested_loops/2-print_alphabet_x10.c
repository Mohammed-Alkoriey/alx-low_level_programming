#include"main.h"

/**
 * print_alphabet - prints the alphabet in lowercase ten times
 * Return: nothing
 */



void print_alphabet_x10(void)
{
int cChar,iTimes;
for(iTimes = 0; iTimes < 10; itimes++)
{
for (cChar = 'a'; cChar <= 'z'; cChar++)
{
_putchar(cChar);
}
_putchar('\n');
}
}
