#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: number of elemets to cout
 *
 * Return: count of the arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	int count = 0;
	va_list args;
	int i;

	if (n <= 0)
		return (0);


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		count += va_arg(args, int);
	}

	va_end(args);

	return (count);
}
