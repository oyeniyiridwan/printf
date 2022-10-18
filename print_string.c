#include "main.h"

/**
 * print_string - print bunch of character as string
 * @c: The character to print
 *
 * Return: On success 1.
 */

int print_string(char *str)
{
  int a = 0;
  if (str == NULL)
    str = "(null)";

while (str[a] != '\0')
{
_putchar(str[a]);
a++;
}
return (a);
}
