#include <stdio.h>


#define IN  1       // Внутри слова
#define OUT 0       // Снаружи слова

/* Вывод входного потока по одному слову в строку */
int main()
{
    int c, state;

    state = OUT;
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
