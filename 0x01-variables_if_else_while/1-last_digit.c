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
int iLastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
iLastDigit = n % 10;
if (iLastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, iLastDigit);
}
else if (iLastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, iLastDigit);
}
else if (iLastDigit < 6 && iLastDigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, iLastDigit);
}
return (0);
}
