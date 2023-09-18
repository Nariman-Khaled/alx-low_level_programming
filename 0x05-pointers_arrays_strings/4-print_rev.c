#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to string
*/
void print_rev(char *s)
{
	char buffer[200];
	int count = 0;
	int index;

	while (*s != 0)
	{
		buffer[count] = *s;
		count++;
		s++;
	}

	for (index = count - 1; index >= 0; index--)
	{
		_putchar(buffer[index]);
	}
	_putchar('\n');
}
