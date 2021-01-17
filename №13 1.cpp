#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
    float s, m;
    printf("stoimost:");
    scanf_s("%f", &s);
    for (m = 0.1; m < 1.1; m += 0.1)
        printf("%f kg = %f\n", s*m, m);
    return 0;
}