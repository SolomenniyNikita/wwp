#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, sum;
    printf("enter a");
    scanf_s("%d", &a);
    printf("enter b");
    scanf_s("%d", &b);
    printf("enter c");
    scanf_s("%d", &c);
    if ((a >= b) & (a >= c)) 
    {
        if (b >= c) {
            printf("%d\n", a + b);
        }
        else printf("%d\n", a + c);
    }
    else if ((b >= a) & (b >= c))
        if (a >= c) 
        {
            printf("%d\n", a + b);
        }
        else printf("%d\n", b + c);
    else
        if (a >= b) 
        {
            printf("%d\n", a + c);
        }
        else printf("%d\n", b + c);
    return 0;
}