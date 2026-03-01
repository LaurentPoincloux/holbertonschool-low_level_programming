#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: number of _ printed characters
*/

void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
			_putchar('_');
	}

	_putchar('\n');
}
