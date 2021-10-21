#if 0


/*
* 函数的递归调用,函数内部调用函数
*/
#include<iostream>
using namespace std;
unsigned fac(unsigned n);
int main() {
	unsigned n;
	cout << "输入一个数字" << endl;
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