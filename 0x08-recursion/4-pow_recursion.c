#include "main.h"
/**
 * _pow_recursion - computes the value of x raised to the power of y
 * @x: is the number
 * @y: is the power
 * Return: the calculated number
 */
int _pow_recursion(int x, int y);

int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}

int _pow_recursion(int x, int y)
{
  if (y == 0){
    return (1);
  }else{
    if(y < 0){
      return (-1);
    }else{
     return (x * _pow_recursion(x,y-1));
    }
  }
}

