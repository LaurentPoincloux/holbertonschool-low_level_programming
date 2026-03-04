#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: pointer to the string
 *
 * Description: Calculates and returns the number of characters
 * in the string pointed to by s.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int c = 0;

	for (c = 0; s[c] != '\0'; c++)
	;

	return (c);
}
