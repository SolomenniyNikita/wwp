#include<iostream>
#include<math.h>
using namespace std;
int quarter(float x, float y)
{
	if ((x > 0) && (y > 0)) 
	{
		return 1;
	}
	if ((x < 0) && (y > 0)) 
	{
		return 2;
	}
	if ((x < 0) && (y < 0)) 
	{
		return 3;
	}     if ((x > 0) && (y < 0))
	{
		return 4;
	}
}
int main(void)
{
	int i;
	for (i = 1; i <= 3; ++i)
	{
		float x, y;
		cout << "X:";
		cin >> x;
		cout << "Y:";
		cin >> y;
		cout << "Quarter:" << quarter(x, y);
	}
}