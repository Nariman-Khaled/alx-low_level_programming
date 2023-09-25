#include "main.h"

/**
 * _memcpy - copies memory area.
 * @n: number of memory area bytes
 * @src: source to copy from
 * @dest: destnation to copy to
 * Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
