#include "main.h"

/**
* print_hexa - print integers in hexadecimal numerals
* @a: Integer
*
* Return: length of hexa;

*/


int handle_String(char *w, char *str)
{
  int a = 0, len, left = 0;
  len = length(w, 0, (_strlen(w) - 2));
  while (w[a]  != '\0')
    {
      if (w[a]  == '-')
	left = 1;
      a++;
    }
  return print_format_String(len, left, str);
}


/**
 */
 
int print_format_String(int len, int left, char *str)
{
  int length, width = len, width_variable = _strlen(str), total;
  if ( width < width_variable)
      length = width_variable;                                 
  else
    length = width;
total = length - width_variable;
    if (!left)
     {
       int u;
       for (u = 0; u < total; u++)
	 {
	
	 _putchar(' ');
	 }
      }
    print_string(str);
    if (left)
      {
	int g;
	for (g = 0; g< total; g++)
	  {
	   
	      _putchar(' ');
	  }
	      
      }
    /*    if (precision)
      _putchar('p');*/
    return (length);
}
