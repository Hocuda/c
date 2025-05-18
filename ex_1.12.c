#include <stdio.h>


#define IN  1       // Внутри слова
#define OUT 0       // Снаружи слова

/* Вывод входного потока по одному слову в строку */
int main()
{
    int c, nw, state;

    state = OUT;
    nw = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t'){
            if (state == IN){
                state = OUT;
                printf("\n");
            }
        }
        else {
            state = IN;
            putchar(c);
        }
    }
}
