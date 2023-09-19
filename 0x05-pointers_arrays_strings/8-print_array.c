#include "main.h"

/**
 * print_array - prints elements of integers array, followed by a new line.
 * Numbers must be separated by comma, followed by a space
 * The numbers displayed in the same order as they are stored in the array
 *
 * @a: pointer to string
 * @n: number of elements of the array to be printed
*/
void print_array(int *a, int n)
{
	int index = 0;

	for (; index < n - 1; index++)
	{
		printf("%i, ", a[index]);
	}
	printf("%i\n", a[n - 1]);
}
