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
		putchar(ascii);
		if (ascii != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
