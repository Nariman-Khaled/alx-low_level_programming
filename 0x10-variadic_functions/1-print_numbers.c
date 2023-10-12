#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line.
 * If separator is NULL, don’t print it
 *
 * @n: number of integers passed to the function
 * @separator: is the string to be printed between numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n <= 0)
		return;


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		if (separator == NULL)
			printf("%d ", value);
		else
			printf("%d%s", value, separator);
	}

	printf("\n");
	va_end(args);

}
