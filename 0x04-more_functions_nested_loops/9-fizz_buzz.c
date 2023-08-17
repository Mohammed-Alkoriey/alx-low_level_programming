#include <stdio.h>
/**
 * main - calls fizz_buzz function
 * Return: 0
 */
void fizz_buzz(void);

int main(void)
{
fizz_buzz();
return (0);
}

void fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
}
