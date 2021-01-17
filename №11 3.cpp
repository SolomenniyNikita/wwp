#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, rasstoyanie1, rasstoyanie2;
    printf("enter a\n");
    scanf_s("%d", &a);
    printf("enter b\n");
    scanf_s("%d", &b);
    printf("enter c\n");
    scanf_s("%d", &c);
    rasstoyanie1 = abs(a - b);
    rasstoyanie2 = abs(a - c);
    if (rasstoyanie1 < rasstoyanie2)
        printf("rasstoyanie ot A do B ", rasstoyanie1);
    else printf("rasstoyanie ot A do C ", rasstoyanie2);
    return 0;
}