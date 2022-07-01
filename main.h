#ifndef MAIN_C
#define MAIN_C

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);

typedef struct ch
{
	char *ch;
	char (*type)(char *);
} ch_con;

#endif
