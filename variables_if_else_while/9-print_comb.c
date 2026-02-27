#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all the single-digit numbers separated by a coma
* followed by a space
*
* Return: Always 0 (Success)
*/

int main(void)
{
int n = 0;

while (n <= 9)
{
putchar (n  + '0');
if (n != 9)
{
putchar(',');
putchar(' ');
}
n++;
}

putchar('\n');
return (0);
}
