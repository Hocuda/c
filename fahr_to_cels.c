#include <stdio.h>

/* Вывод таблицы температур по Фаренгейту и Цельсию
    для farh = 0, 20, ... , 300;
    версия с вещественной арифметикой */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* нижняя граница температур в таблице */
    upper = 300; /* верхняя граница */
    step = 20; /* величина шага */

    fahr = lower;
    printf("Fahrenheits \tCelsius\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%6.0f %15.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
