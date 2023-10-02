#include "main.h"

/**
 * _strcat -  concatenates two strings.
 * @src: the string to append
 * @dest: string to append to,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != 0)
	{
		ptr++;
	}

	while (*src != 0)
	{
		*ptr = *src;
		src++;
		ptr++;
	}

	*ptr = *src;
	return (dest);
}
