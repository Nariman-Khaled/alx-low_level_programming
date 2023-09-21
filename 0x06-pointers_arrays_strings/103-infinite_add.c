#include "main.h"
/**
 * infinite_add -  adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result pointer
 * @size_r: result length
 *
 * Return: sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)

{
/* local variable declaration */
	int i = 0, j = 0, k, l = 0, f, s, d = 0;

	/* step 1: get the max length of the numbers */
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		l = i;
	else
		l = j;

	/* step 2: check that the result can be stored in r else return 0 */
	if (l + 1 > size_r)
		return (0);


	r[l] = '\0';

	/*
		*step 3: iterate throught the arrays and convert each element to int
		* sum the 2 intgers from arrays and te remindar from last operation
		* add the sum ones to the array and save the tenth to var:d
	 */
	for (k = l - 1 ; k >= 0 ; k--)
	{
		i--;
		j--;
		if (i >= 0)
			f = n1[i] - '0';
		else
			f = 0;

		if (j >= 0)
			s = n2[j] - '0';
		else
			s = 0;

		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	/*
		*step 4: check if a remindar still exists,
		* shift all the digits to right and add it
	 */
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (r);

}
