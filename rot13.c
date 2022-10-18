#include "main.h"

/**
* rot13 - convert characters in s usung rot13 format
* @s: parameter
*
* Return: Always 0 (Success)
*/

int rot13(char *s)
{
int i;
char lower[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char upper[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

if (s == NULL)
s = "(null)";
i = 0;
while (s[i] != '\0')
{
int q;
for (q = 0; q < 52; q++)
{
if (s[i] == lower[q])
{
  _putchar(upper[q]);
break;
}
}
i++;
}
return (i);
}
