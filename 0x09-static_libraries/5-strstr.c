#include "main.h"

/**
 * _strstr -  locates a substring.
 * @haystack: String to check in
 * @needle: substring to find
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int haystackIndex = 0;
	unsigned int needleIndex;

	while (haystack[haystackIndex] != '\0')
	{
		needleIndex = 0;

		while (needle[needleIndex] != '\0')
		{
			if (needle[needleIndex] != haystack[haystackIndex + needleIndex])
				break;

			needleIndex++;
		}
		if (needle[needleIndex] == '\0')
		{
			return (&haystack[haystackIndex]);
		}
		haystackIndex++;
	}

	return (0);
}
