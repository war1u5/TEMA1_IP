#include <stdio.h>
#include <stdlib.h>

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

int add_numbers(int a, int b)
{
    return a + b;
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

    return 0;
}