#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
    float p;

    cout << "p = ";
    cin >> p;

    int k = 1;
    float s = 1000;
    while (s <= 1100) 
    {
        k++;
        s += s * p / 100;
    }
    cout << "k = " << k << endl << "s = " << s;
}