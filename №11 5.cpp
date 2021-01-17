#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int x;
    printf("x\n");
    scanf_s("%i", &x);
    if (x == 0) printf("nylevoe");
    else 
    {
        if (x > 0) printf("polozhitelnoe nechetnoe");
        else printf("polozhitelnoe chetnoe");
        if (x < 0) printf("otricatelnoe nechetnoe");
        else printf("otricatelnoe chetnoe");
    }
    return 0;
}
