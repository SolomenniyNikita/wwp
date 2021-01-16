
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	float a, b, proizv, summa, chastnoe, raznost;
	a != 0;
	b != 0;
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	summa = a + b;
	raznost = a - b;
	proizv = a * b;
	chastnoe = (abs(a)) / (abs(b));
	printf("a + b %f\n", summa);
	printf("a - b %f\n", raznost);
	printf("a * b %f\n", proizv);
	printf("abs(a)/abs(b) %f", chastnoe);
	return 0;
}