#include "main.h"

/**
 * print_chessboard -  prints the chessboard.
 * @a: pointer to board array
*/
void print_chessboard(char (*a)[8])
{
	unsigned int rowIndex = 0;
	unsigned int columIndex = 0;

	for (; rowIndex < 8; rowIndex++)
	{
		for (columIndex = 0; columIndex < 8; columIndex++)
		{
			_putchar(a[rowIndex][columIndex]);
		}
		_putchar('\n');
	}
}
