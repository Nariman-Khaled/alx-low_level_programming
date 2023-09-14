#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Do not print 2 and 4
 * followed by a new line.
*/
void print_most_numbers(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		if (number != '2' && number != '4')
		{
			_putchar(number);
		}
	}
	_putchar('\n');
}
