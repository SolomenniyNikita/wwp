#include<iostream>
using namespace std;
int main()
{
	int A;
	cout << "A = ";
	cin >> A;
	if ((A / 100) > (A % 100 / 10) & (A % 100 / 10) > (A % 10) || (A / 100) < (A % 100 /
		10) && (A % 100 / 10) < (A % 10)) 
	{
		cout << "True";
	}
	else {
		cout << "False";
	}
}