#include <stdio.h>
#include <math.h>
int main() 
{
	int x, a, b, c, p;
	printf("vvedite treh znachnoye chislo\n");
	scanf_s("%d", &x);
	a = x / 100;
	c = x % 100;
	p = c * 10 + a;
	printf("poluchennoe chislo= %d", p);
	return 0;
}