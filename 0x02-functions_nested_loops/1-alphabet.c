#include "main.h"

/**
 * print_alphabet - prints the alphabet
*/
void print_alphabet(void)
{
	char ascii = 'a';

	for (ascii = 'a'; ascii <= 'z'; ascii++)
	{
		_putchar(ascii);
	}
	_putchar('\n');
}
