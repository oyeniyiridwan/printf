#include "main.h"

/**
* print_octal - print integers in octal numerals
* @a: Integer
*
* Return: length of hexa;

*/

int print_octal(unsigned long int a)
{
long  int w, p, z;
char array[8] = "01234567";
if ( a < 8)
{
_putchar(array[a]);
return (1);
}
else
{
w = a / 8;
p = a % 8;
z = 1 + print_octal(w);
_putchar(array[p]);
return (z);
}
}
