#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int add_numbers(int a, int b)
{
    return a + b;
}

int sub_numbers(int a, int b)
{
    return a - b;
}

void useless_function()
{
    for (int i = 0; i < 100000; i++)
    {
        ;
    }
    printf("[useless_function] Doing useless stuff\n");
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

    printf("I can also subtract numbers!\n");

    int diff = sub_numbers(num1, num2);
    printf("\n%d - %d = %d\n", num1, num2, diff);

    printf("Calling this useless function for no reason\n");
    clock_t start_time = clock();
    useless_function();
    clock_t end_time = clock();
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("I wasted %.6f seconds of your time\n", time_taken);

    return 0;
}