﻿#include <stdio.h>
#include <math.h>
int main(void)
{
	int a[5];
	int n;
	printf("N=\n");
	scanf_s("%i", &n);
	int i;
	for (i = 0; i < n; ++i) 
	{
		printf("a[%i] : ", i + 1);
		scanf_s("%i", &a[i]);
	}
	if (a[n - 1] > a[n - 2]) 
	{
		printf("%i \n", n);
	}
	else {
		i = n - 2;
		while ((i >= 1) && !((a[i - 1] < a[i]) && (a[i] > a[i + 1])))
		{
			(--i);
		}
		printf("%i \n", i + 1);
	}
	return 0;
}