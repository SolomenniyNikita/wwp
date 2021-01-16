
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	float x1, x2, x3, AC, BC, x;
	printf("enter A: ");
	scanf_s("%f", &x1);
	printf("enter B: ");
	scanf_s("%f", &x2);
	printf("enter C: ");
	scanf_s("%f", &x3);
	AC = fabs(x3 - x1);
	BC = fabs(x3 - x2);
	x = AC * BC;
	printf("AC * BC:%f", x);
	return 0;
}