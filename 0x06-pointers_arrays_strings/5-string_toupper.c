#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: str to change
 *
 * Return: pointer to upper case string.
*/
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != 0)
	{
		if (*ptr >= 97 && *ptr <= 122)
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}

	return (str);
}
