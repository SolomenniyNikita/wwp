#include <stdio.h>
#include <math.h>
int main() 
{
	int A, N, C;
	printf("enter A\n");
	scanf_s("%d", &A);
	N = A * A;
	C = N * A;
	N = C * N;
	C = N * N;
	C = C * N;
	printf("A = %d\n", C);
	return 0;
}