#ifndef MAIN
#define MAIN
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int print_hexa(unsigned long int a, int b);

int percent();

int print_octal(unsigned long int a);

int _putchar(char c);

int print_string(char *str);

int print_unsigned(long int a);

int print_bin(unsigned int a);

int print_S(char *str);

int print_pointers(void *p);

int length(char *w, int z, int index);

int _strlen(char *str);

int personal_int(int a);

int handle_Integer(char *w, int d);

int print_format_Integer(int len, int invisible, int zero, int sign, int left, int d);

int print_format_String(int len, int left, char *str);

int handle_String(char *w, char *str);

int _printf(const char * format, ...);

int rot13(char *s);

int rev_string(char *s);
  
typedef struct format
{
char *pattern;
int (*func)();
}format_t;

#endif
