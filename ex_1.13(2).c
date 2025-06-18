#include <stdio.h>

#define IN  1       // Внутри слова
#define OUT 0       // Снаружи слова
#define MAXWORD 80  // Длинна гистограммы

/* Вывод вертикальной гистограммы длин слов из входного потока */
int main()
{
    int i, j, c, state;
    int lenword[MAXWORD], nextword, maxword;

    nextword = maxword = 0;
    for (i = 0; i < MAXWORD; i++)
        lenword[i] = 0;
    state = OUT;

    while ((c = getchar()) != EOF && nextword < MAXWORD){
        if (c == ' ' || c == '\n' || c == '\t'){
            if (state == IN){
                if (lenword[nextword] > maxword)
                    maxword = lenword[nextword];
                nextword++;
                state = OUT;
            }
        }
        else{
            if (state == OUT)
                state = IN;
            lenword[nextword]++;
        }
    }

    for (i = 1; i <= maxword; i++){
        for (j = 0; j < nextword; j++){
            if (lenword[j] >= i)
                putchar('#');
            else
                putchar(' ');
        }
        putchar('\n');
    }
}
