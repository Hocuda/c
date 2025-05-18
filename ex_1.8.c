#include <stdio.h>

/* Программа для подсчета пробелов, знаков табуляции, символов конца строки */

int main()
{
    int c, sp, tab, eof;

    sp =0;
    tab = 0;
    eof = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++sp;
        else if (c == '\t')
            ++tab;
    }
    if (c == EOF) // всегда будет равно 1
        ++eof;

    printf("Space cout:%d\nTabs cout:%d\nEOF cout:%d\n", sp, tab, eof);
}
