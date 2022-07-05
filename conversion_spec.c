#include "main.h"

/**
 *pf_char - will print a character to output
 *@list: to iterate through arguments
 *Return: character to output
 */
int pf_char(va_list list)
{
	int count = 0;

	_putchar((char)va_arg(list, int));
	count++;
	return (count);
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
	int count = 0;

	string = va_arg(list, char *);
	if (string == NULL)
		string = "(null)";
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
		count++;
	}
	return (count);
}

/**
 *pf_percent - will print a percent symbol to output
 *@list: to iterate through arguments
 *Return: percent sign to output
 */
int pf_percent(__attribute__((unused))va_list list)
{
	int count = 0;

	_putchar('%');
	count++;
	return (count);

}

/**
 *pf_int - will print an int to output
 *@list: to iterate through arguments
 *Return: int to output
 */
int pf_int(va_list list)
{
	int i = 1;
	int n = va_arg(list, int);
	int count = 0;
	int j;
	char intmin[11] = {"-2147483648"};

	if (n == INT_MIN)
	{
		for (j = 0; j <= 10; j++)
		{
			_putchar(intmin[j]);
			count++;
		}
		return (count);
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		n = n * (-1);
	}
	while ((n / i) >= 10)
	{
		i *= 10;
	}
	while (i >= 1)
	{
		_putchar((n / i) + '0');
		n %= i;
		i /= 10;
		count++;
	}
	return (count);
}
