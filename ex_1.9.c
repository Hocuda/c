#include <stdio.h>

/* Программа копирования входного потока с заменой множества пробелов на один */
int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            putchar(c);
            while ((c = getchar()) != EOF && c == ' ')
                ;
        }
        putchar(c);
    }
}
