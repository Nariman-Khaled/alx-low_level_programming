

/**
 * _strncpy -  copies a string.
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @src: the string to copy
 * @dest: string to be copied to
 * @n:number of bytes to copy
 *
 * Return: pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int index = 0;

	for (index = 0; index < n; index++)
	{
		if (*src == 0)
		{
			*ptr = 0;
		}
		else
		{
			*ptr = *src;
			src++;
		}
		ptr++;
	}

	return (dest);
}
