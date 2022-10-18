

#include "main.h"

/**
 */


int _printf(const char *format, ...)

{
  if (format)
    {
  int counter = 0, i = 0;
  va_list ap;
  va_start(ap, format);
  while (format[i])
    {
      
      if (format[i] == '%' && (format[i + 1] != '%' || format[i+1] != '\0'))
	{
	  
	  int len;
	  char array[10] = "";
	  int p = i;
	  char *string,m;
	 
	  
	  while (!((format[p] >= 97 && format[p] <= 122) || (format[p] >= 65 && format[p] <= 90)))
	    {
	      array[p - i] = format[p];
	      p++;
	    }
	  
	  array[p - i] = format[p];

	  switch(array[p - i])
	    {
	    case 'c':
	    
   	      m = va_arg(ap, int);	     
	      len = _putchar(m);
	      break;
	    case 's':
	      string = va_arg(ap, char*);
	      len = handle_String(array,string);	      
	      break;
      	    case 'i':
	      len = handle_Integer(array, va_arg(ap, int));
	      break;
	    case 'u':
	      len = print_unsigned(va_arg(ap, long int));
	      break;
	    case 'o':
	      len = print_octal(va_arg(ap, long int));
	      break;
	    case 'x':
	      len = print_hexa(va_arg(ap, long int), 0);
	      break;
	    case 'X':
	      len = print_hexa(va_arg(ap, long int), 1);
	      break;
	    case 'b':
	      len = print_bin(va_arg(ap, int));
	      break;
	    case 'S':
	      len = print_S(va_arg(ap, char*));

	      break;
	    case 'd':
	      len = handle_Integer(array, va_arg(ap, int));
	      break;
	    case 'r':
	      len = rev_string(va_arg(ap, char*));
	      break;
	    case 'R':
	      len = rot13(va_arg(ap, char*));
	      break;
	    case 'p':
	      len = print_pointers(va_arg(ap, void*));
	      break;
       	    default:
	      return (-1);
	    
	    }
	  counter += len;
	
	  
	  i = p + 1;
	}
   
      else if (format[i] == '%' && format[i + 1] =='%')
	{
	  
	_putchar(format[i]);
	
	counter++;
	  
	i +=2;
	}
      else if (format[i] == '%' && format[i +1] =='\0')
	return (-1);
      else
	{
	  _putchar(format[i]);
	  counter++;
	  i++;
	}
    }
  va_end(ap);
  return (counter);
    }
  else
    return (-1);
}

