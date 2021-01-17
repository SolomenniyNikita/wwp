#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
    int n;
    char c;
    printf("c = ");
    scanf_s("%c", &c);
    printf("n = ");
    scanf_s("%i", &n);
    switch (c) 
    {
    case 'С':
        switch (n) 
        {
        case 1:
            c = 'З';
            break;
        case 0:
            c = 'С';
            break;
        case -1:
            c = 'В';
            break;
        }
        break;
    case 'В':
        switch (n) 
        {
        case 1:
            c = 'С';
            break;
        case 0:
            c = 'В';
            break;
        case -1:
            c = 'Ю';
            break;
        }
    case 'Ю':
        switch (n) 
        {
        case 1:
            c = 'В';
            break;
        case 0:
            c = 'Ю';
            break;
        case -1:
            c = 'З';
            break;
        }
        break;
    case 'З':
        switch (n) 
        {
        case 1:
            c = 'Ю';
            break;
        case 0:
            c = 'З';
            break;
        case -1:
            c = 'С';
            break;
        }
    }
    printf("%c\n", c);
    return 0;
}
