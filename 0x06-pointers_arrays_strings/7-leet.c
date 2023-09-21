#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: str to encode
 *
 * Return: pointer to encoded string.
*/
char *leet(char *str)
{
	int index;
	int letterIndex;

	char letters[] = "aAeEoOtTlL";
	char codes[] = "4433007711";

	for (index = 0; str[index] != '\0'; index++)
	{
		for (letterIndex = 0; letterIndex < 10; letterIndex++)
		{
			if (str[index] == letters[letterIndex])
			{
				str[index] = codes[letterIndex];
			}
		}
	}
	return (str);
}
