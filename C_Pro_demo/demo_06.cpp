#if 0


/*
* �����ĵݹ����,�����ڲ����ú���
*/
#include<iostream>
using namespace std;
unsigned fac(unsigned n);
int main() {
	unsigned n;
	cout << "����һ������" << endl;
	cin >> n;
	unsigned y = fac(n);
	cout << n << "!=" << y << endl;
	return 0;
}
unsigned fac(unsigned n) {
	unsigned f;
	if (n == 0) {
		f = 1;
	}
	else
	{
		f = fac(n - 1) * n;
	}
	return f;
}

#endif // 0