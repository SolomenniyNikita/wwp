#include <stdio.h>
#include <math.h>

int main() 
{
	int n, K;
	printf("chislo K\n");
	scanf_s("%d", &K);
	n = K % 7;
	printf("den' nedeli %d", n);
	return 0;
}