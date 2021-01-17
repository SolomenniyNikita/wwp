#include <stdio.h>
#include <math.h>

int main() 
{
	float A, pi;
	pi = 3.14;
	printf("enter the degree (0 <= a < 2*pi)\n");
	scanf_s("%f", &A);
	A = A*(180/pi);
	printf("A=%f\n", A);
	return 0;
}