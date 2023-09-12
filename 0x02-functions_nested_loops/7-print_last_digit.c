#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: a number
 *
 * Return: value of the last digit
*/
int print_last_digit(int n)
{
	int result;

	if (n >= 0)
	{
		result = n % 10;
	} else
	{
		result = -n % 10;
	}

	_putchar(result + '0');
	return (result);
}

