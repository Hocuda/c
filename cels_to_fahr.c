#include <stdio.h>

/* Вывод таблицы температур по Цельцию и Фаренгейту */

int main()
{
    float cels, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 150;
    step = 10;

    cels = lower;
    printf("Celsius \tFahrenheits\n");
    while (cels <= upper)
    {
        fahr = cels * (9.0 / 5.0) + 32;
        printf("%4.0f %18.1f\n", cels, fahr);
        cels = cels + step;
    }
}
