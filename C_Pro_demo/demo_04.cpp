#if 0


/*
* 计算公式，例3-5案例，
*/
#include<iostream>
#include<cmath>
using namespace std;
double dsin(double x);
const double TINY_VALUE = 1e-10;
int main() {
	double k, r, s;
	cout << "r = " << endl;
	cin >> r;
	cout << "s = " << endl;
	cin >> s;
	if (r * r <= s * s) {
		k = sqrt(dsin(r) * dsin(r) + dsin(s) * dsin(s));
	}
	else
	{
		k = dsin(r * s) / 2;
	}
	cout << k << endl;
	return 0;
}
double dsin(double x) {
	double g= 0;
	double t = x;
	int n = 1;
	do
	{
		g += t;
		n++;
		t = -t * x * x / (2 * n - 1) / (2 * n - 2);
	} while (fabs(t)>=TINY_VALUE);
	return g;
}
#endif // 0
