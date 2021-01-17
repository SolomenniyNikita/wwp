#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
	int x;
	printf("x\n");
	scanf_s("%i", &x);
	if ((x % 2) == 0) printf("chetnoe");
	else printf("nechetnoe\n");
	if (x > 99) printf("trehznachnoe");
	else if ((99 >= x) & (x > 9)) printf("dvuznachnoe");
	else if (x <= 9)  printf("odnoznachnoe");
	return 0;
}