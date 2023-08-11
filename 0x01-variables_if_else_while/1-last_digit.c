#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - creates a random number and tells us if it's negative or positive
 *
 *Return: 0 success
 */
int main(void)
{
int n;
int iLastNumber;
srand(time(0));
n = rand() - RAND_MAX / 2;
iLastNumber = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, iLastNumber);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, iLastNumber);
}
else if (n < 6 && 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, iLastNumber);
}
return (0);
}
