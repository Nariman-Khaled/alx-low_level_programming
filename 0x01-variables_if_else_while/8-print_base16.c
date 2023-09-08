#include <stdio.h>

/**
 * main - application entry point
 *
 * Return: always 0
*/
int main(void)
{
	int ascii;
	char letter;

	for (ascii = 48; ascii <= 57; ascii++)
	{
		putchar((char)ascii);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
