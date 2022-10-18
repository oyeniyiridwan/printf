#include "main.h"

/**
* print_hexa - print integers in hexadecimal numerals
* @a: Integer
*
* Return: length of hexa;

*/

int print_hexa(unsigned long int a, int b)
{
  long  int w, p, z;
  char array[16] = "0123456789abcdef";
if ( a < 16)
{
  if (b && a > 9)
    _putchar(array[a] - 32);
  else
_putchar(array[a]);
return (1);
}
else
{
w = a / 16;
p = a % 16;
 z = 1 + print_hexa(w, b);
 if (b && p > 9)
   _putchar(array[p] - 32);
 else
_putchar(array[p]);
return (z);
}
}
