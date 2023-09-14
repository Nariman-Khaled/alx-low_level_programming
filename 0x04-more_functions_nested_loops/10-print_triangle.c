#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * If size is 0 or less, the function should print only a new line
*/
void print_triangle(int size)
{
	int line, row;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (line = 0; line < size; line++)
			{
				if (line < (size - row - 1))
				{
					_putchar(' ');
				} else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
