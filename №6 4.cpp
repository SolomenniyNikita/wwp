#include <stdio.h>
#include <math.h>
int main()
{
	int x, x1, x2, y;
	printf("x ");
	scanf_s("%d", &x);
	x1 = x * x * x * x * x * x;
	x2 = x * x;
	y = 3 * x1 - 6 * x2 - 7;
	printf("y = %d\n", y);
	return 0;
}