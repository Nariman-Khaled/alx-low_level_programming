#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * fills the first n bytes of the memory area pointed to by s
 *  with the constant byte b
 * @n: first n bytes of the memory area
 * @s: address of n
 * @b: byte to use
 * Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}

	return (s);
}
