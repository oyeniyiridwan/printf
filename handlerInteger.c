#include "main.h"

/**
* length - return length of width
* @w: main string
* @index: start index
* @z: output
*
* Return: z;

*/

int length(char *w, int z, int index)
{
int i, r, j, len;
len = _strlen(w) - 2;
if (!(w[index] >= 48 && w[index] <= 57))
return (z);
else
{
j = w[index] - 48;
r = len - index;
for (i = 0; i < r; i++)
j *= 10;
z += j;
return (length(w, z, index - 1));
}
}


/**
*  _strlen - find length of str
* @str: string
*
* Return: length of string
*/

int _strlen(char *str)
{
int a  = 0;
while (str[a] != '\0')
a++;
return (a);
}




int handle_Integer(char *w, int d)
{
  int  invisible = 0, len,/* precision,*/ left = 0, zero = 0, sign = 0, a = 0;
  while (w[a]  != '\0')
    {
      if (w[a] == '.')
	{
	  /*	  precision = length(w, 0, (_strlen(w) -2));*/
	  len = length(w, 0, a-1);
	  a++;
	}
    else
      {
      len = length(w, 0, (_strlen(w) - 2));
      a++;
      }
  if (w[a] == '+' && d >= 0)
    {
    sign = 1;
    a++;
    }
  if (w[a] == ' ' && d >= 0)
    {
    invisible = 1;
    a++;
    }
  if (w[a] == '0')
    {
    zero = 1;
    a++;
    }
  if (w[a]  == '-')
    {
    left = 1;
    a++;
    }
    }
  return print_format_Integer(len, invisible, zero, sign, left, /*precision,*/ d);
}


/**
 */
 
int print_format_Integer(int len, int invisible, int zero, int sign, int left, int d)
{
  int length, width = len, width_variable = personal_int(d), total;
  if ( width < width_variable)
    {
      length = width_variable;
      if ((sign || invisible) && d>0)
	length += 1;
    }                                                          
  else
    length = width;
total = length - width_variable - sign - invisible;
 if (d < 0)
   total--;
    if (!left)
     {
       int u;
       for (u = 0; u < total; u++)
	 {
	 if (zero)
	 _putchar('0');
	 else
	   _putchar(' ');
	 }
      }
    if (sign)
      _putchar('+');
    if(invisible && d > 0)
      _putchar(' ');
 print_unsigned(d);
    if (left)
      {
	int g;
	for (g = 0; g< total; g++)
	  {
	    if (zero)
	      _putchar('0');
	    else
	      _putchar(' ');
	  }
	      
      }
    /*    if (precision)
      _putchar('p');*/
    return (length);
}
