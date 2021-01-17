#include<locale.h>
#include<math.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
    setlocale(LC_ALL, "Russian");
    int n;

    printf("n = ");
    scanf_s("%i", &n);

    if (n / 10 == 1)
        switch (n) {
        case 10:
            printf("десять учебных заданий");
            break;
        case 11:
            printf("одинадцать учебных заданий");
            break;
        case 12:
            printf("двенадцать учебных заданий");
            break;
        case 13:
            printf("тринадцать учебных заданий");
            break;
        case 14:
            printf("четырнадцать учебных заданий");
            break;
        case 15:
            printf("пятнадцать учебных заданий");
            break;
        case 16:
            printf("шестнадцать учебных заданий");
            break;
        case 17:
            printf("семнадцать учебных заданий");
            break;
        case 18:
            printf("восемнадцать учебных заданий");
            break;
        case 19:
            printf("девятнадцать учебных заданий");
            break;
        }
    else {
        switch (n / 10) {
        case 2:
            printf("двадцать ");
            break;
        case 3:
            printf("тридцать ");
            break;
        case 4:
            printf("сорок ");
            break;
        }

        switch (n % 10) {
        case 1:
            printf("одно ");
            break;
        case 2:
            printf("два ");
            break;
        case 3:
            printf("три ");
            break;
        case 4:
            printf("четыре ");
            break;
        case 5:
            printf("пять ");
            break;
        case 6:
            printf("шесть ");
            break;
        case 7:
            printf("семь ");
            break;
        case 8:
            printf("восемь ");
            break;
        case 9:
            printf("девять ");
            break;
        }

        switch (n % 10) {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("учебных заданий");
            break;
        case 1:
            printf("учебное задание");
            break;
        case 2:
        case 3:
        case 4:
            printf("учебных задания");
            break;
        }
    }
    return 0;
}