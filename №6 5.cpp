#include <stdio.h>
#include <math.h>
int main() 
{
	int x, x1, x2, y;
	printf("x ");
	scanf_s("%d", &x);
	x1 = (x - 3) * (x - 3) * (x - 3) * (x - 3) * (x - 3) * (x - 3);
	x2 = (x - 3) * (x - 3) * (x - 3);
	y = 4 * x1 - 7 * x2 + 2;
	printf("y = %d\n", y);
	return 0;
}