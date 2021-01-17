#include <stdio.h>
#include <math.h>
int main() 
{
	int n, t;
	printf("kolichestvo sec\n");
	scanf_s("%d", &n);
	t = n%60;
	printf("kolichestvo proshedshih sec %d", t);
	return 0;
}