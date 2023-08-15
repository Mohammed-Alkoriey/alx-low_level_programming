#include"main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 * Return: nothing
 */



void print_alphabet_x10(void)
{
int cChar, iTimes;
for (iTimes = 0; iTimes < 10; iTimes++)
{
for (cChar = 'a'; cChar <= 'z'; cChar++)
{
_putchar(cChar);
}
_putchar('\n');
}
}
