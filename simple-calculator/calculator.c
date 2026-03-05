#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int choice = 0;
    
    printf("Simple Calculator\n");
    printf("1) Add\n");
    printf("2) Substract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit\n");

    scanf("%d", &choice);

    printf("Choice: %d\n", choice);

    if(choice == 0)
    {
    printf("Bye!\n");
    }

    return (0);
}