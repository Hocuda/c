#include <stdio.h>

/* Вывод таблицы температур по Цельцию и Фаренгейту через функцию*/

float c_to_f(float);

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
        fahr = c_to_f(cels);
        printf("%4.0f %18.1f\n", cels, fahr);
        cels = cels + step;
    }
    return 0;
}

float c_to_f(float cels)
{
    float fahr;

    fahr = cels * (9.0 / 5.0) + 32;
    return fahr;
}
