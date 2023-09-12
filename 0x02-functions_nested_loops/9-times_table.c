#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
*/
void times_table(void)
{
	int base;
	int index;
	int result;

	for (base = 0; base < 10; base++)
	{
		for (index = 0; index < 10; index++)
		{
			result = base * index;

			if (index == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(' ');
				if (result / 10 != 0)
				{
					_putchar(result / 10 + '0');
				} else
				{
					_putchar(' ');
				}
				_putchar(result % 10 + '0');
			}
			if (index != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}

