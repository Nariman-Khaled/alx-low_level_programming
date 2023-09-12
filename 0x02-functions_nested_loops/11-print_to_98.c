#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 *  followed by a new line.
 * @n: starting number
*/
void print_to_98(int n)
{
	int tmp;

	while (n != 98)
	{
		tmp = n;
		if (n < 0)
		{
			_putchar('-');
			tmp = -n;
		}
		printDigits(tmp);
		_putchar(',');
		_putchar(' ');
		if (n > 98)
		{
			n--;
		} else
		{
			n++;
		}
	}
	printDigits(n);
	_putchar('\n');
}

/**
 * printDigits - prints two digit numbers
 * @num:  number
*/
void printDigits(int num)
{
	char buffer[20];
	int length = 0;
	int i;

	if (num == 0)
	{
		_putchar('0');
	}
	else
	{
		while (num > 0)
		{
			buffer[length] = '0' + (num % 10);
			num /= 10;
			length++;
		}

		for (i = length - 1; i >= 0; i--)
		{
			_putchar(buffer[i]);
		}
	}
}

