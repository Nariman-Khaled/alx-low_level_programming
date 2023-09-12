#include "main.h"
#include "_putchar.c"

/**
 * main - application entry point
 *
 * Return: Always 0
*/
int main(void)
{
	print_alphabet();
	return (0);
}

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
