

/**
 * _strcmp -  compares two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: an integer value that indicates the result of the comparison:
 * If the two strings are equal, strcmp returns 0.
 * negative, If the first string is lexicographically less than the second.
 * positive, the first string is lexicographically greater than the second.
*/
int _strcmp(char *s1, char *s2)
{
	char *ptr = s1;
	int index = 0;
	int result = 0;

	while (*ptr != 0)
	{
		if (s1[index] == s2[index])
		{
			index++;
			ptr++;
			continue;
		}
		else
		{
			result = s1[index] - s2[index];
			break;
		}
	}

	return (result);
}
