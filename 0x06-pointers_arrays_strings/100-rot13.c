#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: str to change
 *
 * Return: pointer to encoded string.
*/
char *rot13(char *str)
{
	int index;
	int letterIndex;

	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13Code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; str[index] != '\0'; index++)
	{
		for (letterIndex = 0; letterIndex < 52; letterIndex++)
		{
			if (str[index] == letters[letterIndex])
			{
				str[index] = rot13Code[letterIndex];
				break;
			}
		}
	}
	return (str);
}
