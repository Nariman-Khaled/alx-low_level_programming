#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 * If n is 0 or less, the function should only print \n
*/
void print_diagonal(int n)
{
	int line, row;

	if (n > 0)
	{
		for (row = 1; row <= n; row++)
		{
			for (line = 0; line < row; line++)
			{
				if (line < row - 1)
				{
					_putchar(' ');
				} else
				{
					_putchar('\\');
				}
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
