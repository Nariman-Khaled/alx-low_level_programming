#include <unistd.h>
#include <string.h>

/**
 * print - writes string(array of characters) c to stdout
 * @c: The characters array to print
 */
void print(char c[])
{
	write(1, c, strlen(c));
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
