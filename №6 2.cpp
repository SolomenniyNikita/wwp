#include <stdio.h>
#include <math.h>
int main() 
{
	int a, b, c, d, e, f;
	printf("enter a=");
	scanf_s("%d", &a);
	printf("enter b=");
	scanf_s("%d", &b);
	printf("enter c=");
	scanf_s("%d", &c);
	d = a;
	e = b;
	f = c;
	a = f;
	c = e;
	b = d;
	printf("a %d\n", a);
	printf("b %d\n", b);
	printf("c %d\n", c);
	return 0;
}