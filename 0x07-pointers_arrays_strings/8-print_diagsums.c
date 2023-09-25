#include "main.h"

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: pointer to array
 * @size: size of array
*/
void print_diagsums(int *a, int size)
{
	int rowIndex = 0;
	int d1Index, d2Index;
	int sum1 = 0, sum2 = 0;

	for (; rowIndex < size; rowIndex++)
	{
		d1Index = (rowIndex * size) + rowIndex;
		d2Index = (rowIndex * size) + size - rowIndex - 1;

		sum1 += a[d1Index];
		sum2 += a[d2Index];
	}
	printf("%i, %i\n", sum1, sum2);
}
