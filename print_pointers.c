#include "main.h"

/**
 * print_pointers - print pointers
 * @p: pointer
 *
 * Return: On success 1.
 */

int print_pointers(void *p)
{
  if (p)
    {
long int j  = (long int) p;
_putchar('0');
_putchar('x');
 return (2 + print_hexa(j, 0));
    }
  exit(98);
  return (0);
}
