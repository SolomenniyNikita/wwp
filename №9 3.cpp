#include <stdio.h>
#include <math.h>
int main() 
{
	int n, k, s;
	printf("den' v godu\n");
	scanf_s("%d", &k);
	printf("den' nedeli\n");
	scanf_s("%d", &n);
	s = (k + n - 2) % 7 + 1;
	printf("nomer dnya nedeli= %d", s);
	return 0;
}