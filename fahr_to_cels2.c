#include <stdio.h>

/* Вывод таблицы температур по Фаренгейту и Цельсию */

#define     LOWER   0       /* нижний предел диапазона */
#define     UPPER   300     /* верхний предел */
#define     STEP    20      /* размер шага */

int main()
{
    int fahr;
    printf("Fahrenheits \tCelsius\n");

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%6d %15.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

    // Вывод таблицы в противоположную сторону

    printf("\nReverse Fahrenheits \tReverse Celsius\n");

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%10d %23.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
