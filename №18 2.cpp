#include <stdio.h>
#include <math.h>
int main(void)
{
	float a[5], b[5];
	int N;
	printf("N=\n");
	scanf_s("%i", &N);
	int c;
	for (c = 0; c < N; ++c) 
	{
		printf("a[%i] : ", c + 1);
		scanf_s("%f", &a[c]);
	}
	int x;
	for (c = 0; c < N; ++c) 
	{
		b[c] = 0;
		for (x = 0; x <= c; ++x) 
		{
			b[c] += a[x];
		}
		b[c] /= c + 1;
	}
	printf("B=\n");
	for (c = 0; c < N; ++c) printf(" %i: %f\n", c + 1, b[c]);
	return 0;
}