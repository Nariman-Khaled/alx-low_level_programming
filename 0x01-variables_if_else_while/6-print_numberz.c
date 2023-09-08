#include <stdio.h>

/**
 * main - application entry point
 *
 * Return: always 0
*/
int main(void)
{
	int ascii;

	for (ascii = 48; ascii <= 57; ascii++)
	{
		putchar((char)ascii);
	}
	putchar('\n');
	return (0);
}
