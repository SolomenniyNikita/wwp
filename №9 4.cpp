#include <stdio.h>
#include <math.h>

int main() 
{
	int a, b, c, s, n, Cvkvadrate;
	printf("enter a\n");
	scanf_s("%d", &a);
	printf("enter b\n");
	scanf_s("%d", &b);
	printf("enter c\n");
	scanf_s("%d", &c);
	n = (a/c)*(b/c);
	printf("kolichestvo kvadratov= %d\n", n);
	Cvkvadrate = c * c;
	s = a*b-n*Cvkvadrate;
	printf("ploshad' =%d", s);
	return 0;
}