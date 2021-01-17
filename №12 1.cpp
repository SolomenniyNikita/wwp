#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
int main(void) 
{
    setlocale(LC_ALL, "Russian");
    int x, y, z, g, k, c;

    printf("x(day) = ");
    scanf_s("%i", &x);
    printf("y(month) = ");
    scanf_s("%i", &y);
    g = x / 10;
    z = x % 10;
    k = 0;
    while ((x > 10) && (x < 20))
    {
        switch (x)
        {
        case(11):
            printf("Одиннадцатое ");
            break;
        case(12):
            printf("Двенадцатое ");
            break;
        case(13):
            printf("Тринадцатое ");
            break;
        case(14):
            printf("Четырнадцатое ");
            break;
        case(15):
            printf("Пятнадцатое ");
            break;
        case(16):
            printf("Шестнадцатое ");
            break;
        case(17):
            printf("Семнадцатое ");
            break;
        case(18):
            printf("Восемнадцатое ");
            break;
        case(19):
            printf("Девятнадцатое ");
            break;
        }
        k = 1;
        break;
    }
    if (k != 1) 
    {
        switch (g)
        {
        case(1):
            printf("Десятое ");
            break;
        case(2):
            printf("Двадцать ");
            break;
        case(3):
            printf("Тридцать ");
            break;
        }
        switch (z)
        {
        case(1):
            printf("Первое ");
            break;
        case(2):
            printf("Второе ");
            break;
        case(3):
            printf("Третье ");
            break;
        case(4):
            printf("Четвертое ");
            break;
        case(5):
            printf("Пятое ");
            break;
        case(6):
            printf("Шестое ");
            break;
        case(7):
            printf("Седьмое ");
            break;
        case(8):
            printf("Восьмое ");
            break;
        case(9):
            printf("Девятое ");
        }
    }
    switch (y)
    {
    case(1):
        printf("января");
        break;
    case(2):
        printf("февраля");
        break;
    case(3):
        printf("марта");
        break;
    case(4):
        printf("апреля");
        break;
    case(5):
        printf("мая");
        break;
    case(6):
        printf("июня");
        break;
    case(7):
        printf("июля");
        break;
    case(8):
        printf("августа");
        break;
    case(9):
        printf("сентября");
        break;
    case(10):
        printf("октября");
        break;
    case(11):
        printf("ноября");
        break;
    case(12):
        printf("декабря");
        break;
    }
    return 0;
}