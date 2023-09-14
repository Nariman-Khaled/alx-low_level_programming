#include "main.h"

/**
 * print_square -  prints a square, followed by a new line.
 * @size: is the size of the square
 * If size is 0 or less, the function should print only a new line
*/
void print_square(int size)
{
	int line, coloum;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (coloum = 0; coloum < size; coloum++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
