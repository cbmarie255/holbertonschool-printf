#include "main.h"

/**
 *print_numbers - will print all numbers fed through the main
 *@number: iterator to move through string of digits
 *Return: number to output
 */
void print_numbers(int number)
{
	int divide_dig = 1;
	int temp_num = number;
	char c;

	if (number == 0)
		return;
	while (temp_num > 0)
	{
		temp_num = (temp_num / 10);
		divide_dig = (divide_dig * 10);
	}
	divide_dig = (divide_dig / 10);
	while (divide_dig > 0)
	{
		temp_num = (number / divide_dig) % 10;
	c = temp_num + '0';
	_putchar(c);
	divide_dig = (divide_dig / 10);
	}
	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}

}
