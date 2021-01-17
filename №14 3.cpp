#include <stdio.h>
#include<conio.h>
int main(void)
{
    int n;
    printf("N=");
    scanf_s("%i", &n);
    int k = 0, temp = 0;
    while (temp < n) 
    {
        ++k;
        temp += 3;
    }
    printf("K=%i\nsumma%i\n", k, temp);
    return 0;
}