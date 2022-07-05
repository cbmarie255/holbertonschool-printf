#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int pf_char(va_list list);
int pf_string(va_list list);
int pf_percent(va_list list);
int pf_int(va_list list);
int (*get_conversion(char check))(va_list);
typedef struct ch
{
	char *ch;
	int (*type)(va_list);
} ch_con;

#endif
