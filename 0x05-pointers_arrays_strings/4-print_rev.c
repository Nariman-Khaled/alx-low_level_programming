#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to string
*/
void print_rev(char *s)
{
	int count = 0;
	int index;

	while (*(s + count) != 0)
	{
		count++;
	}

	for (index = count - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
