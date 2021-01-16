#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b;
	float c;
	printf("a =");
	scanf_s("%d", &a);
	printf("b =");
	scanf_s("%d", &b);
	c = (a + b) / 2;
	printf("c =%f", c);
}