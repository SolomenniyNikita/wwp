#include <stdio.h>
#include <math.h>

int main() 
{
	int A, B, X;
	printf("A= ");
	scanf_s("%d", &A);
	printf("B= ");
	scanf_s("%d", &B);
	X = (-1) * A / B;
	printf(" X= %d\n", X);
	return 0;
}