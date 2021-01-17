#include <stdio.h>
int main(void)
{
    int n;
    printf("N=");
    scanf_s("%i", &n);
    int f = 0, f1 = 1, f2 = 1, k = 2;
    while (f < n) 
    {
        ++k;
        f = f2 + f1;
        f2 = f1;
        f1 = f;
    }
    printf("K=%i\n", k);
    return 0;
}
