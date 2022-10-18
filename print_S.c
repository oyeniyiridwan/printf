#include "main.h"

/**
 * print_S - print non printable characters
 * @str: The character to print
 *
 * Return: On success 1.
 */

int print_S(char *str)
{
  int a = 0, counter = 0,w;
while (str[a] != '\0')
{
  if ((str[a] > 0 && str[a] <= 32) || str[a] >= 127)
    {
      _putchar('\\');
      _putchar('x');
      w = print_hexa(str[a], 1);
      if (str[a]/16 < 10)
	{
      _putchar(0 + '0');
      w++;
	}
     
      counter += (w++);
      a++;
    }
  else
    {
_putchar(str[a]);
a++;
    }
}
return (a +counter);
}
