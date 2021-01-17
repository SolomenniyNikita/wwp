#include <math.h>
#include <stdio.h>
int main(void)
{
	int a[5];
	int N;
	printf("N= ");
	scanf_s("%i", &N);
	int x;
	for (x = 0; x < N; ++x) 
	{
		printf("a[%i]= ", x + 1);
		scanf_s("%i", &a[x]);
	}
	int odd = 0;
	for (x = N - 1; x >= 0; --x) 
	{
		if (a[x] % 2 != 0) 
		{
			odd = a[x];
			break;
		}
	}
	for (; x >= 0; --x) 
	{
		if (a[x] % 2 != 0) 
		{
			a[x] += odd;
		}
	}
	printf("A=\n");
	for (x = 0; x < N; ++x)
		printf(" %i %i\n", x + 1, a[x]);
	return 0;
}