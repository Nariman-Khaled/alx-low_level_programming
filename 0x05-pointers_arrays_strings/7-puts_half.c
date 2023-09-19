#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to string
*/
void puts_half(char *str)
{
	int count = 0;
	int index;

	while (*(str + count) != 0)
	{
		count++;
	}

	index = ((count + 1) / 2);
	for (; index < count; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
