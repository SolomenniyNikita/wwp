#include <stdio.h>
int main(void)
{
    int A, B;
    printf("A\n");
    scanf_s("%i", &A);
    printf("B\n");
    scanf_s("%i", &B);
    while (A >= B)
        A = A - B;
    printf("%i\n", A);
    return 0;
}