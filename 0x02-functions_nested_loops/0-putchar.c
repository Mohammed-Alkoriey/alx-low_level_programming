#include <stdio.h>
#include "main.h"
/**
 *main - prints _putchar
 *Return: 0
 */

int main(void)
{
char cWord[] = "_putchar";
int i;
for(i = 0; i < 8; i++)
{
_putchar(cWord[i]);
}
_putchar("\n");
return (0);
}
