#include <stdio.h>
#include <math.h>
int swap(float* f1, float* f2) 
{
	*f1 += *f2;
	*f2 = *f1 - *f2;
	*f1 = *f1 - *f2;
	return 0;
}
int main(void)
{
	float a[5];
	int N;
	printf("N= ");
	scanf_s("%i", &N);
	int x;
	for (x = 0; x < N; ++x) 
	{
		printf("a[%i] : ", x + 1);
		scanf_s("%f", &a[x]);
	}
	for (x = 1; x < N; ++x) 
	{
		if (a[x - 1] > a[x]) 
		{
			swap(&a[x - 1], &a[x]);
		}
		else break;
	}
	printf("A= \n");
	for (x = 0; x < N; ++x) 
		printf(" %i= %f\n", x + 1, a[x]);
	return 0;
}