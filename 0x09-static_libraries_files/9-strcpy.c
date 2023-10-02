

/**
 * _strcpy -copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: pointer to buffer
 * @src: pointer to string
 *
 * Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int sourceCount = 0;
	int destIndex = 0;

	while (*(src + sourceCount) != 0)
	{
		sourceCount++;
	}

	for (; destIndex < sourceCount; destIndex++)
	{
		dest[destIndex] = src[destIndex];
	}
	dest[sourceCount] = '\0';

	return (dest);
}
