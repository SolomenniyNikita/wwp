#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, d;
	printf("enter a\n");
	scanf_s("%d", &a);
	printf("enter b\n");
	scanf_s("%d", &b);
	printf("enter c\n");
	scanf_s("%d", &c);
	d = a;
	a = c;
	c = d;
	d = a;
	a = b;
	b = d;
	printf("a %d\n", a);
	printf("b %d\n", b);
	printf("c %d\n", c);
	return 0;
}