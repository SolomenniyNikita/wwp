#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, P, S;
	printf("a =");
	scanf_s("%d", &a);
	printf("b =");
	scanf_s("%d", &b);
	S = a * b;
	P = 2 * (a + b);
	printf("S =%d\n", S);
	printf("P =%d\n", P);
	return 0;
}


