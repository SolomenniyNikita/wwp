
#include<iostream>
#include<math.h>
#include<conio.h>
int main(void) {
    float a, b;
    printf("a = ");
    scanf_s("%f", &a);
    printf("b = ");
    scanf_s("%f", &b);

    int i, i_2;
    for (i = a; i <= b; ++i) 
    {
        for (i_2 = 1; i_2 <= i; ++i_2)
             printf("%d\n", i);
    }
    return 0;
}