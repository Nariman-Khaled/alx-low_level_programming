#include "main.h"

/**
 * print_number - prints two digit numbers
 * @n:  number
*/
void print_number(int n)
{
	char buffer[20];
	int length = 0;
	int i;
	char sign;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			sign = '-';
			n = -n;
		}

		while (n > 0)
		{
			buffer[length] = '0' + (n % 10);
			n /= 10;
			length++;
		}

		if (sign == '-')
		{
			_putchar(sign);
		}
		for (i = length - 1; i >= 0; i--)
		{
			_putchar(buffer[i]);
		}
	}
}

