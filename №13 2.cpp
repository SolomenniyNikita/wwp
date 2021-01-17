#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
    int N, i;
    float r = 1;
    printf("N:");
    scanf_s("%i", &N);
    for (i = 0; i <= N; ++i)
        r *= 1.0 + (float)i / 10;
    printf("result = %f \n ", r);
    return 0;
}