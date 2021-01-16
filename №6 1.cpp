#include <stdio.h>
#include <math.h>

int main() 
{
	int a, b, c, d;
	printf("enter a\n");
	scanf_s("%d", &a);
	printf("enter b\n");
	scanf_s("%d", &b);
	c = a;
	d = b;
	a = d;
	b = c;
	printf("a %d\n", a);
	printf("b %d\n", b);
	return 0;
}