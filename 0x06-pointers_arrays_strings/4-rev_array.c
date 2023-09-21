#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to reverse items
 * @n: number of elements of the array
*/
void reverse_array(int *a, int n)
{
	int index;

	for (index = 0; index < n / 2; index++)
	{
		int tmpIndex = (n - 1) - index;
		int tmp = a[index];

		a[index] = a[tmpIndex];
		a[tmpIndex] = tmp;
	}
}
