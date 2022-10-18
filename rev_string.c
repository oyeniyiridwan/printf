
#include "main.h"

/**
* rev_string - reverse s
* @s: parameters
*
* Return: o Always(Success)
*/

int rev_string(char *s)
{

int i = 0, result;
int p = 0;
if (s == NULL)
s ="(null)";
while (s[i] != '\0')
{
i++;
}
i--;
 result = i;
while (i >= p)

{
_putchar(s[i]);
i--;
}
 return (result);
}
