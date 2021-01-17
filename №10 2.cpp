#include <stdio.h>
#include <math.h>
int main(void)
{
    int A, B, C;
    printf("A\n");
    scanf_s("%i", &A);
    printf("B\n");
    scanf_s("%i", &B);
    printf("C\n");
    scanf_s("%i", &C);
    printf("%d\n", A < B < C);
    return 0;
}