#include "main.h"

/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	ch_con op[] = {
		{"c", pf_char},
		{"s", pf_string},
		{"%", pf_percent},
		{"d", pf_signed_int},
		{"i", pf_unsigned_int},
		{NULL, NULL}
	}
	int i;

	return (1);
}
