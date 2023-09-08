#include <stdio.h>

/**
 * main - application entry point
 *
 * Return: always 0
*/
int main(void)
{
	int ascii;
	int asciiChild;

	for (ascii = 48; ascii < 57; ascii++)
	{
		for (asciiChild = ascii + 1; asciiChild <= 57; asciiChild++)
		{
			putchar(ascii);
			putchar(asciiChild);
			if (!(ascii == 56 && asciiChild == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
