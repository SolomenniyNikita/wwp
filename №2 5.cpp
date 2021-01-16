#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	float x1, x2, y1, y2, x3, y3, a, b, c, p, s, x, y, z, q, w, e;
	printf("enter x1: ");
	scanf_s("%f", &x1);
	printf("enter x2: ");
	scanf_s("%f", &x2);
	printf("enter y1: ");
	scanf_s("%f", &y1);
	printf("enter y2: ");
	scanf_s("%f", &y2);
	printf("enter x3: ");
	scanf_s("%f", &x3);
	printf("enter y3: ");
	scanf_s("%f", &y3);
	x = (x2 - x1) * (x2 - x1);
	y = (y2 - y1) * (y2 - y1);
	z = (x3 - x2) * (x3 - x2);
	q = (y3 - y2) * (y3 - y2);
	w = (x1 - x3) * (x1 - x3);
	e = (y1 - y3) * (y1 - y3);
	a = sqrt(x + y);
	b = sqrt(z + q);
	c = sqrt(w + e);
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("(a + b + c) / 2 = %f:\n", p);
	printf("sqrt(p * (p - a) * (p - b) * (p - c)) = %f\n", s);
	return 0;
}