

/**
 * _abs - function that omputes the absolute value of an integer.
 * @n: The number to check
 *
 * Return: absolute value of an integer.
*/
int _abs(int n)
{
	int result;

	if (n >= 0)
	{
		result = n;
	} else
	{
		result = -n;
	}
	return (result);
}

