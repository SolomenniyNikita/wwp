#include <stdio.h>
#include <math.h>
int main(void)
{
    int A;
    printf("A\n");
    scanf_s("%i", &A);
    printf("%d\n", (A % 2 == 0) & (A > 9) & (A < 100));
    return 0;
}