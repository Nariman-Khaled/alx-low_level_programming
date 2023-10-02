

/**
 * _isalpha - function that checks for alpha character.
 * @c: The character to check
 *
 * Return:  1 if c is alpha, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}

