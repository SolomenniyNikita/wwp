#include <stdio.h>
#include <math.h>
int main(void)
{
    int A, B;
    printf("A\n");
    scanf_s("%i", &A);
    printf("B\n");
    scanf_s("%i", &B);
    printf("%d\n", (A > 2) & (B <= 3));
    return 0;
}