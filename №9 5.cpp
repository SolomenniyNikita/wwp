#include <stdio.h>
#include <math.h>
int main() 
{
	int god, stoletie;
	printf("vvedite nomer goda\n");
	scanf_s("%d", &god);
	stoletie = (god / 100) + 1;
	printf("nomer stoletiya %d", stoletie);
	return 0;
}