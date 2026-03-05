#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int choice = 0;
    float a;
    float b;
    float sum;
    
    printf("Simple Calculator\n");
    while(1)
    {

    printf("1) Add\n");
    printf("2) Substract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit\n");

    scanf("%d", &choice);

    printf("Choice: %d\n", choice);

    if(choice > 4 || choice < 0)
    {
        printf("Invalid choice\n");
    }
    
    if(choice == 0)
    {
    printf("Bye!\n");
      return (0);
    }

    if (choice == 1)
    {
        printf("a:\n");
        scanf("%f", &a);
        printf("b:\n");
        scanf("%f", &b);
        printf("a: %.2f\nb: %.2f\n", a, b);
        sum = a + b;
        printf("Result: %.2f\n", sum);
    }

        if (choice == 2)
    {
        printf("a:\n");
        scanf("%f", &a);
        printf("b:\n");
        scanf("%f", &b);
        printf("a: %.2f\nb: %.2f\n", a, b);
        sum = a - b;
        printf("Result: %.2f\n", sum);
    }
    
    }

}