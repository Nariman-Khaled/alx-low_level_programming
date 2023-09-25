#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @c: search character
 * @s: string to search in
 * Return: pointer to the first occurrence of the character c
 * in the string s
 * or NULL if the character is not found.
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