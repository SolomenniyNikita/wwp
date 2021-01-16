#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	float x1, x2, x3, ac, bc, s;
	printf("enter a: ");
	scanf_s("%f", &x1);
	printf("enter b: ");
	scanf_s("%f", &x2);
	printf("enter c: ");
	scanf_s("%f", &x3);
	ac = fabs(x3 - x1);
	bc = fabs(x3 - x2);
    s = (ac + bc);
	printf("ac=%f\n", ac);
	printf("bc=%f\n", bc);
	printf("(ac + bc)=%f", s);
	return 0;
}
