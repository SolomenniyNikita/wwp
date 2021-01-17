#include <stdio.h>
#include <math.h>

int main() 
{
	int a, b, n;
	printf("razmer a=");
	scanf_s("%d", &a);
	printf("razmer b=");
	scanf_s("%d", &b);
	n = a % b;
	printf("dlina nezanyatoy chasti a= %d", n);
	return 0;
}