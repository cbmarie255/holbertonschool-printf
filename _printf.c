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
	int count = 0;

	va_start(list, format);
	if (format == NULL || list == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			type = get_conversion(format[i + 1]);
				if (type != NULL)
					count = count + (type(list));
				else
				{
					_putchar(format[i + 1]);
					count++;
				}
			i = i + 2;
		}
		if (format[i] == '%' && format[i + 1] == '\0')
		{	_putchar('%');
			count++;
		}
		_putchar(format[i]);
		count++;
	}
	va_end(list);
	return (count);
}
