#include "main.h"

/**
 * print_number - rints an integer.
 * @n: number to print
*/
void print_number(int n)
{
	int copy, tenth, size = 1;

	if (n < 0)
	{
		_putchar('-');
		copy = n * -1;
	}
	else
	{
		copy = n;
	}

	tenth = copy;

	while (tenth > 9)
	{
		tenth /= 10;
		size *= 10;
	}

	for ( ; size >= 1; size /= 10)
	{
		_putchar(((copy / size) % 10) + '0');
	}

}
