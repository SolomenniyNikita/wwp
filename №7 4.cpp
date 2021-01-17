#include <stdio.h>
#include <math.h>

int main() 
{
	int v1, v2, t, s;
	printf("vvedite scorost' v1 ");
	scanf_s("%d", &v1);
	printf("vvedite scorost' v2 ");
	scanf_s("%d", &v2);
	printf("vvedite rasstoyanie ");
	scanf_s("%d", &s);
	printf("vvedite vremya  ");
	scanf_s("%d", &t);
	v1 = v1 + v2;
	s = s + v1 * t;
	printf("rasstoyanie mezhdy v1 i v2= %d\n", s);
	return 0;
}