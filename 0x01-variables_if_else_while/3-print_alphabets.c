#include <stdio.h>

/**
 * main - application entry point
 *
 * Return: always 0
*/
int main(void)
{
	char ascii;

	for (ascii = 'a'; ascii <= 'z'; ascii++)
	{
		putchar(ascii);
	}
	for (ascii = 'A'; ascii <= 'Z'; ascii++)
	{
		putchar(ascii);
	}
	putchar('\n');
	return (0);
}
