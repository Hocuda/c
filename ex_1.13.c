#include <stdio.h>

#define IN  1       // Внутри слова
#define OUT 0       // Снаружи слова

/* Вывод горизонтальной гистограммы длин слов из входного потока */
int main()
{
    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t'){
            if(state == IN)
                putchar('\n');
            state = OUT;
        }
        else{
            if(state == OUT)
                state = IN;
            putchar('#');
        }
    }
}
