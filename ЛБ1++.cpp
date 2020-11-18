#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float a, b, c;
	float a1, b1, c1, p, R, r, S;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	p = (a + b + c) / 2;
	a1 = 2 * sqrt(b * c * p * (p - a)) / (b + c);
	b1 = 2 * sqrt(a * c * p * (p - b)) / (a + c);
	c1 = 2 * sqrt(b * a * p * (p - c)) / (b + a);
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	R = (a * b * c) / (4 * S);
	r = S / p;
	cout << "a1 = " << a1 << '\n' << "b1 = " << b1 << '\n' << "c1 = " << c1 << '\n' << "R = " << R << '\n' << "r = " << r << '\n';
	system("pause");
}
