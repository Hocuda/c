#include <stdio.h>

/* Замена табуляции на \t, символ возврата на \b, обратных косых черт на \\ */
int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
}
