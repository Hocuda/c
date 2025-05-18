#include <stdio.h>

/* подсчет символв во входном потоке; 2-я версия */
int main()
{
        double nc;

        for (nc = 0; getchar() != EOF; ++nc)
                ; // обязательное тело цикла, пусть и пустое
        printf("%.0f\n", nc);
}
