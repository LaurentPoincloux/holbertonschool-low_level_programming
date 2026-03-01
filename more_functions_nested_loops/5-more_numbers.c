#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int row, num;
	int max_number = 14;
	int repeat = 10;

	for (row = 0; row < repeat; row++)
	{
		for (num = 0; num <= max_number; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
