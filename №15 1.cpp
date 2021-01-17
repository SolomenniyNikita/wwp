#include<iostream>
#include<locale.h>
#include<math.h>

using namespace std;

void PowerA3(double a, double& b)
{
	b = a * a * a;
}
int main(void)
{
	double c[5] = { 7, 3, 1, 9, 2 };
	for (int i = 0; i < 5; i++)
	{
		PowerA3(c[i], c[i]);
		cout << c[i] << ' ';
	}
}