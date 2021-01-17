#include <stdio.h>
#include <math.h>

int main() 
{
	float A, radian, pi;
	pi = 3.14;
	printf("enter the degree (0 <= A < 360)\n");
	scanf_s("%f", &A);
	radian = pi * A / 180;
	printf("A = %f\n", radian);
	return 0;
}