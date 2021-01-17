#include <stdio.h>
#include <math.h>

int main() 
{
	int A1, B1, C1, A2, B2, C2, E, x, y;
	printf("enter A1=");
	scanf_s("%d", &A1);
	printf("enter B1=");
	scanf_s("%d", &B1);
	printf("enter C1=");
	scanf_s("%d", &C1);
	printf("enter A2=");
	scanf_s("%d", &A2);
	printf("enter B2=");
	scanf_s("%d", &B2);
	printf("enter C2=");
	scanf_s("%d", &C2);
	E = A1 * B2 - A2 * B1;
	x = (C1 * B2 - C2 * B1) / E;
	y = (A1 * C2 - A2 * C1) / E;
	printf(" x= %d\n", x);
	printf(" y=  %d\n", y);
	return 0;
}