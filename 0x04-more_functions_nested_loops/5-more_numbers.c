#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line.
*/
void more_numbers(void)
{
	int number;
	int line;

	for (line = 0; line < 10; line++)
	{
		for (number = '0'; number <= '9'; number++)
		{
			_putchar(number);
		}
		_putchar('\n');
	}
}
