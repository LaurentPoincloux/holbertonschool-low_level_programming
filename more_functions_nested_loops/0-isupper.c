#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if character is uppercase
 * @c: the character to check
 *
 * Description: Checks if the input character
 * is an uppercase letter (A-Z). It returns 1 if true,
 * otherwise it returns 0.
 *
 * Return: 1 if @c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
