#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 * If separator is NULL, don’t print it
 *
 * @n: number of integers passed to the function
 * @separator: is the string to be printed between numbers
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n <= 0)
	{
		printf("\n");
		return;
		}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *value = va_arg(args, char*);

		if (value)
			printf("%s", value);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);

}
