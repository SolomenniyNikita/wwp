#include<iostream>
#include<math.h>
using namespace std;
float fact2(int n) 
{
	int temp = 1;
	for (; n > 0; n -= 2)
		temp *= n;
	return temp;
}
int main(void)
{
	int i, n;
	for (i = 1; i <= 5; i++) 
	{
		cout << "n = ";
		cin >> n;
		cout << "fact = " << fact2(n);
	}
}