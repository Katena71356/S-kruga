#include <iostream>
using namespace std;
int main()
{
	const double pi = 3.14;

	double L, R, S;


	cout << "Enter L:  ";
	cin >> L;

	R = L / (2 * pi);
	S = pi * R * R;

	cout << "S = " << S << "\n";
}