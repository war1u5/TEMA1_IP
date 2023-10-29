#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int add_numbers(int a, int b)
{
    return a + b;
}

void open_and_display(const char *filename)
{
    FILE *f = fopen(filename, "r");
    if (f == NULL)
    {
        printf("error opening file %s\n", filename);
        exit(-1);
    }

    char c;
    while ((c = fgetc(f)) != EOF)
    {
        printf("%c", c);
    }

    fclose(f);
}

void welcome()
{
    open_and_display("./_ascii_art.txt");
    printf("Test APP\n");
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
    welcome();

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

    printf("Time to say goodbye...\n");
    printf("Terminating in: ");
    for (int i = 3; i >= 0; i--)
    {
        printf("%d ", i);
        sleep(1);
    }
    printf("Signing off...\n");
    sleep(1);
    printf("\nGoodbye!");

    return 0;
}