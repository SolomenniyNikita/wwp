#include <stdio.h>
#include <math.h>
int main()
{
	int A, N;
	printf("enter A\n");
	scanf_s("%d", &A);
	N = A * A;
	N = N * N;
	N = N * N;
	printf("A = %d\n", N);
	return 0;
}