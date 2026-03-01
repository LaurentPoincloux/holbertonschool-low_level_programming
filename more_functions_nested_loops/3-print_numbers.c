#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Description: This function prints all single-digit numbers starting
 * from 0 up to 9.
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar((i % 10) + '0');

	_putchar('\n');
}
