#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: String to check in
 * @accept: accepted characters
 * Return:pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int index = 0;
	unsigned int acceptIndex;

	while (s[index] != '\0')
	{
		acceptIndex = 0;

		while (accept[acceptIndex] != '\0')
		{
			if (accept[acceptIndex] == s[index])
				return (&s[index]);

			acceptIndex++;
		}
		index++;
	}

	return (0);
}
