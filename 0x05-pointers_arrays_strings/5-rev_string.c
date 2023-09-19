#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: pointer to string
*/
void rev_string(char *s)
{
	int count = 0;
	int index;

	while (*(s + count) != 0)
	{
		count++;
	}

	for (index = 0; index <= (count / 2); index++)
	{
		int tmpIndex = (count - index - 1);
		char tmpValue = *(s + tmpIndex);

		s[tmpIndex] = s[index];
		s[index] = tmpValue;
	}

}
