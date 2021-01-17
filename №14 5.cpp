#include <iostream>
using namespace std;
int NOD(int A, int B)
{
	while (A != B)
		if (A > B) A -= B;
		else B -= A;
	return A;
}
void main()
{
	int A, B;
	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;
	cout << "nod(" << A << ", " << B << ")=" << NOD(A, B);
	system("pause>>void");
}