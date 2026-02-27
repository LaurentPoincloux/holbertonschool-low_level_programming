#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints the alaphabet in lowercase except q and e,
* followed by a new line
*
* Return: Always 0 (Success)
*/

int main(void)
{
int n = 0;

while (n <= 9)
{
putchar (n + '0');
n++;
}

putchar('\n');
return (0);
}
