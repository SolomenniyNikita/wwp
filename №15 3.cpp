#include<iostream>
#include<math.h>
using namespace std;
float rings(float r1, float r2) 
{
	return 3.14 * (r1 * r1 - r2 * r2);
}

int main(void)
{
	int i;
	for (i = 1; i <= 3; ++i) {
		float r1, r2;
		cout << "R1:";
		cin >> r1;
		cout << "R2:";
		cin >> r2;
		cout << "S:" << rings(r1, r2);
	}
}