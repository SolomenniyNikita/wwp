#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b;
	printf("vvedite a\n");
	scanf_s("%d", &a);
	printf("vvedite b\n");
	scanf_s("%d", &b);
	if (a == b)
		a = b = 0;
	if (a > b)
		b = a;
	else a = b;
	printf("novie znacheniya a i b %d\n", a, b);
	return 0;
}