#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n:  the number of times the character _ should be printed
 * If n is 0 or less, the function should only print \n
*/
void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
