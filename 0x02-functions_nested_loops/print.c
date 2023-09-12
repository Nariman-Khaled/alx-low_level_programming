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
