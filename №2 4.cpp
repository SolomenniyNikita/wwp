#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	float x1, x2, y1, y2, a, b, p, s;
	printf("enter x1: ");
	scanf_s("%f", &x1);
	printf("enter x2: ");
	scanf_s("%f", &x2);
	printf("enter y1: ");
	scanf_s("%f", &y1);
	printf("enter y2: ");
	scanf_s("%f", &y2);
	a = fabs(x2 - x1);
	b = fabs(y2 - y1);
	p = (a + b) * 2;
	s = a * b;
	printf("(a + b) * 2 = %f\n", p);
	printf("a * b = %f", s);
	return 0;
}