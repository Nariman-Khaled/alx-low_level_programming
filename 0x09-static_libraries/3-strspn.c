#include "main.h"

/**
 * _strspn - finds the first occurrence of a character in s
 * that is not contained in the set of accept characters
 * @s: String to check in
 * @accept: accepted characters
 * Return: index of the first character found not accepted.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index = 0;
	unsigned int acceptIndex;

	while (s[index] != '\0')
	{
		acceptIndex = 0;

		while (accept[acceptIndex] != '\0')
		{
			if (accept[acceptIndex] == s[index])
				break;

			acceptIndex++;
		}
		if (accept[acceptIndex] == '\0')
		{
			return (index);
		}
		index++;
	}

	return (0);
}
