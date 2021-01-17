#include <stdio.h>
#include <math.h>

int main() 
{
	int a, b;
	printf("razmer v baitah=");
	scanf_s("%d", &a);
	b = a / 1024;
	printf("razmer v kilobaitah= %d", b);
	return 0;
}