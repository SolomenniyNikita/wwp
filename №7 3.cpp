#include <stdio.h>
#include <math.h>

int main() 
{
	int A, X, Y;
	printf("X=");
	scanf_s("%d", &X);
	printf("rub za kg konfet");
	scanf_s("%d", &A);
	printf("Y\n");
	scanf_s("%d", &Y);
	A = A/X;
	A = A*Y;
	printf(" %d\n", A);
	return 0;
}