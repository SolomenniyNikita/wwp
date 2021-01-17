#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int x, y;
    printf("enter x\n");
    scanf_s("%d", &x);
    printf("enter y\n");
    scanf_s("%d", &y);
    if (x > 0 & y > 0) 
    {
        printf("1st");
    }
    if (x < 0 & y > 0) 
    {
        printf("2nd");
    }
    if (x < 0 & y < 0) 
    {
        printf("3rd");
    }
    if (x > 0 & y < 0) 
    {
        printf("4th");
    }

    return 0;
}