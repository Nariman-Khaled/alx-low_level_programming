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
		if (!(ascii == 'q' || ascii == 'e'))
			putchar(ascii);
	}
	putchar('\n');
	return (0);
}
