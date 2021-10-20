#if 0
/*
* 寻找并输出11-999之间的数M,满足m,m²,m³，均为回文数
* 回文数，各数字左右对称的整数，如11² = 121,11³ = 1331
*/
#include<iostream>
using namespace std;
bool symm(unsigned n);
int main() {
	for (unsigned i = 11; i < 999; i++)
	{
		bool a = symm(i);
		bool b = symm(i * i);
		bool c = symm(i * i * i);
		if (a & b & c) {
			cout << "回文数有 " << i << endl;
		}
	}
	return 0;
}
bool symm(unsigned n) {
	unsigned i = n;
	unsigned m = 0;
	while (i>0)
	{
		m = m * 10 + i % 10;
		i = i / 10;
	}
	return m == n;
}
#endif // 0