#include <stdio.h>
#include <stdlib.h>

int add_numbers(int a, int b)
{
    return a + b;
}

int main()
{
    printf("Welcome to my app!\n");

    int num1, num2;
    printf("Check out my addition skills!\n");

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int sum = add_numbers(num1, num2);
    printf("\n%d + %d = %d\n", num1, num2, sum);

    return 0;
}