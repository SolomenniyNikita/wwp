#include <stdio.h>
#include <math.h>
int main(void)
{
    float A, B, C;
    printf("A\n");
    scanf_s("%f", &A);
    printf("B\n");
    scanf_s("%f", &B);
    printf("C\n");
    scanf_s("%f", &C);
    printf("%d\n", (A * A == B * B + C * C) | (B * B == A * A + C * C) | (C * C == A * A + B * B));
    return 0;
}