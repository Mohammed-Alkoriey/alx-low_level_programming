#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: nothing
 */


void swap_int(int *a, int *b)
{
  int iNum;
  iNum = *a;
  *a = *b;
  *b = iNum;
}
