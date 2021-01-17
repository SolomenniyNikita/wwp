#include <stdio.h>
#include <math.h>
int main(void)
{
	int a[5];
	int N;
	printf("N= ");
	scanf_s("%i", &N);
	int x;
	for (x = 0; x < N; ++x) 
	{
		printf("a[%i] : ", x + 1);
		scanf_s("%i", &a[x]);
	}
	int min = 0, max = 0;
	for (x = N - 1; x >= 0; --x) 
	{
		if (a[x] > a[max]) max = x;
		if (a[x] < a[min]) min = x;
	}
	if (max < min) 
	{
		max += min;
		min = max - min;
		max = max - min;
	}
	for (x = min + 1; x < min + (max - min); ++x)
		a[x] = 0;
	printf("A= \n");
	for (x = 0; x < N; ++x) printf(" %i: %i\n", x + 1, a[x]);
	return 0;
}