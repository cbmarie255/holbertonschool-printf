#include "main.h"

/**
 *pf_char - will print a character to output
 *@list: to iterate through arguments
 *Return: character to output
 */
void pf_char(va_list list)
{
	_putchar(va_arg(list, int));
}

/**
 *pf_string - will print a string to output
 *@list: to iterate through arguments
 *Return: string to output
 */
void pf_string(va_list list)
{
	char *string;
	int i;

	string = va_arg(list, char *);
	if (string == NULL)
		return;
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
}

/**
 *pf_percent - will print a percent symbol to output
 *@list: to iterate through arguments
 *Return: percent sign to output
 */
void pf_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
}
