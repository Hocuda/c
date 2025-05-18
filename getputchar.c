#include <stdio.h>

#define     CEOF    EOF // константа значения EOF

int main()
{
    int c;

    printf("EOF = %d\n", CEOF); // 1.7
    c = (getchar() != EOF); // 1.6 проверка выражение на равность 0 или 1
    printf("%d", c);

    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}
