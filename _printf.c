#include "main.h"

/**
 *_printf - will recreate the printf function in C (specifiers limited)
 *@format: a character string composed of 0 or more directives
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int (*type)(va_list);
	va_list list;
	int i;
	unsigned int convert;

	va_start(list, format);
	if (format == NULL || list == NULL)
		return (0);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 2] == ' ')
		{
			type = get_conversion(format[i + 1]);
				if (type != NULL)
					convert = convert + (type(list));
				else
					convert = _putchar(format[i] + _putchar(format[i + 1]));
			i = i + 2;
		}
		else
			_putchar(format[i]);
	}
	va_end(list);
	return (1);
}
