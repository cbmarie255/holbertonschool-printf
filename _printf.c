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

	if (format == NULL)
		return (-1);

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			count++;
		}
		if (format[i] == '%')
		{
			type = get_conversion(format[i + 1]);
				if (type != NULL)
					count = count + (type(list));
				else
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count++;
				}
			i++;
		}
		if (!format[i])
			return (count);
	}
	va_end(list);
	return (count);
}
