#include "main.h"

/**
 * cap_string -  capitalizes all words of a string.
 * Separators of words: space, tabulation
 * , new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @str: str to change
 *
 * Return: pointer to capitalized string.
*/
char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr != 0)
	{
		switch (*ptr)
		{
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
		case ' ':
		case '\n':
		case '\t':
			if (*(ptr + 1) > 96 && *(ptr + 1) < 123)
			{
				ptr++;
				*ptr = *ptr - 32;
			}
		}
		ptr++;
	}

	return (str);
}
