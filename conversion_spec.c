#include "main.h"

/**
 *pf_char - will print a character to output
 *@list: to iterate through arguments
 *Return: character to output
 */
int pf_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 *pf_string - will print a string to output
 *@list: to iterate through arguments
 *Return: string to output
 */
int pf_string(va_list list)
{
	char *string;
	int i;

	string = va_arg(list, char *);
	if (string == NULL)
		return (0);
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	return (1);
}

/**
 *pf_percent - will print a percent symbol to output
 *@list: to iterate through arguments
 *Return: percent sign to output
 */
int pf_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);

}

/**
 *pf_int - will print an int to output
 *@list: to iterate through arguments
 *Return: int to output
 */
int pf_int(va_list list)
{
	int i = list;

	if (list == 0)
	{
		_putchar('0');
	}
	if (list < 0)
	{
		_putchar('-');
		list = -list;
	}
	if (list > 0)
	{
		pf_int(list/10);
		_putchar('0' + (i%10));
	}
	return (1);
}
