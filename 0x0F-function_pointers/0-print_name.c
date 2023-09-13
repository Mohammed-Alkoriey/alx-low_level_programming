#include "function_pointers.h"

/**
 * print_name - it prints a after processing it with a function
 *
 * @name: the string
 * @f: the function
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
