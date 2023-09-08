#include <stdio.h>

/**
 * main - application entry point
 *
 * Return: always 0
*/
int main(void)
{
	char ascii;

	for (ascii = 'z'; ascii >= 'a'; ascii--)
	{
		putchar(ascii);
	}
	putchar('\n');
	return (0);
}
