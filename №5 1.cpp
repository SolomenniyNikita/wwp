#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	float x1, x2, y1, y2, z, x, c;
	printf("enter x1, x2, y1, y2:\n");
	scanf_s("%f", &x1);
	scanf_s("%f", &x2);
	scanf_s("%f", &y1);
	scanf_s("%f", &y2);
	z = (x2 - x1) * (x2 - x1);
	x = (y2 - y1) * (y2 - y1);
	c = sqrt(z + x);
	printf("qrt(z + x) %f", c);
	return 0;
}
