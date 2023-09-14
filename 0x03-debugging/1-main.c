#include <stdio.h>
#include "2-largest_number.c"

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = 1298;
	c = 100;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
