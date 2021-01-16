
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() 
{
	float a, b, proizv, akvadrat, summa, bkvadrat, chastnoe, raznost;
	a != 0;
	b != 0;
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	summa = a + b; 
	raznost = a - b;
	proizv = a * b; 
	akvadrat = a * a;
	bkvadrat = b * b;
	chastnoe = akvadrat / bkvadrat;
	printf("a + b %f\n", summa);
	printf("a - b %f\n", raznost);
	printf("a * b %f\n", proizv);
	printf("akvadrat / bkvadrat %f", chastnoe);
	return 0;
}
