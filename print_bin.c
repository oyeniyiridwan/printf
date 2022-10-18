#include "main.h"

/**
* print_bin - print integers in binary
* @a: Integer
*
* Return: length of binary;

*/

int print_bin(unsigned int a)
{
int w, p, z;
if ( a < 2)
{
_putchar(a +'0');
return (1);
}
else
{
w = a / 2;
p = a % 2;
z = 1 + print_bin(w);
_putchar(p + '0');
return (z);
}
}
