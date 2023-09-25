#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to a character aka the character found
 */
char *_strchr(char *s, char c)
{
	unsigned int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			return (&(s[index]));
		}
		index++;
	}

	return (NULL);
}
