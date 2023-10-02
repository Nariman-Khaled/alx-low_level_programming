

/**
 * _strlen - get length of a string.
 * @s: pointer to string
 *
 * Return: number of characters
*/
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != 0)
	{
		count++;
		s++;
	}

	return (count);
}
