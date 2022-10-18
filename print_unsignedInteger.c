#include "main.h"

/**
* print_unsigned - print positives integer
* @a: Integer
*
* Return: length of hexa;

*/

int print_unsigned(long int a)
{
 
  long int w, p, z = 0;
  if (a < 0)
    {
    _putchar('-');
    a *= -1;
    }
if ( a < 10)
{
_putchar(a + '0');
return (1);
}
else
{
w = a / 10;
p = a % 10;
z = 1 + print_unsigned(w);
_putchar(p  + '0');
return (z);
}
}
