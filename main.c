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

int main()
{
    welcome();

    return 0;
}