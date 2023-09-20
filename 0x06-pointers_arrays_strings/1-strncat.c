#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @src: the string to append
 * @dest: string to append to
 * @n:number of bytes to copy
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int index = 0;

	while (*ptr != 0)
	{
		ptr++;
	}

	for (index = 0; index < n; index++)
	{
		if (*src == 0)
		{
			ptr++;
			break;
		}

		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = 0;

	return (dest);
}
