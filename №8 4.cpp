#include <stdio.h>
#include <math.h>
int main() 
{
	int chislo, edinitsa, desiatok;
	printf("vvedite chislo");
	scanf_s("%d", &chislo);
	edinitsa = chislo % 10;
	desiatok = chislo / 10;
	chislo = edinitsa * 10 + desiatok;
	printf("vivod chisla %d", chislo);
	return 0;
}