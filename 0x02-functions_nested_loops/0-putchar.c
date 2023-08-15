#include <stdio.h>
#include "main.h"
/**
 *main - prints _putchar
 *Return: 0
 */

int main(void)
{
char cWord[] = "_putchar";

for(int i = 0; i < 8; i++)
{
_putchar(cWord[i]);
}
return (0);
}
