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
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;

	return (i);
}
