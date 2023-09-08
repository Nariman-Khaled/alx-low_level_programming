#include <stdio.h>

/**
 * main - application entry point
 *
 * Return: always 0
*/
int main(void)
{
	int asciiFirst;
	int asciiSecond;
	int asciiThird;

	for (asciiFirst = 48; asciiFirst <= 55; asciiFirst++)
	{
		for (asciiSecond = asciiFirst + 1; asciiSecond <= 56; asciiSecond++)
		{
			for (asciiThird = asciiSecond + 1; asciiThird <= 57; asciiThird++)
			{
				putchar(asciiFirst);
				putchar(asciiSecond);
				putchar(asciiThird);
				if (!(asciiFirst == 55 && asciiSecond == 56 && asciiThird == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
