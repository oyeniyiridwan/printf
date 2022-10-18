#include "main.h"

/**
* personal_int - print positives integer
* @a: Integer
*
* Return: length of hexa;

*/

int personal_int(int a)
{
long  int w, z;
if ( a < 10)
{
return (1);
}
else
{
w = a / 10;
z = 1 + personal_int(w);
return (z);
}
}
