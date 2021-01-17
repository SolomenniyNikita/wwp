#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
    int N;
    printf("N:");
    scanf_s("%i", &N);
    int r = 0;
    int i;
    for (i = 1; i <= (2 * N - 1); i += 2) 
    {
        r += i;
        printf("%i ", r);
    }
    return 0;
}
