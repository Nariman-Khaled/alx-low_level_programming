#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
*/
void print_alphabet_x10(void)
{
	char ascii = 'a';
	int index;

	for (index = 0; index < 10; index++)
	{
		for (ascii = 'a'; ascii <= 'z'; ascii++)
		{
			_putchar(ascii);
		}
		_putchar('\n');
	}
}
