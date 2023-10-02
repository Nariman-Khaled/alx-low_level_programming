#include "main.h"

/**
 * main - check the code
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; *argv; i++, argv++)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
