#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: 0 on success
 */

void print_alphabet(void);

void print_alphabet(void)
{
char cChar;
for (cChar = 'a'; cChar <= 'z'; cChar++)
{
_putchar(cAlphabet[cChar]);
}
_putchar('\n');
}
