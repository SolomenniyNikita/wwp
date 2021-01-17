#include <stdio.h>
int main(void)
{
    float a, b, c;
    printf("a\n");
    scanf_s("%f", &a);
    printf("b\n");
    scanf_s("%f", &b);
    printf("c\n");
    scanf_s("%f", &c);
    printf("%d\n", (a < b + c) & (b < a + c) & (c < a + b));
    return 0;
}
