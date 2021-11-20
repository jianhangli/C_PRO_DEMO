#if 0


/*
* 案例5.2
* 变量的生存期与可见性
*/
#include<iostream>
using namespace std;
int i = 1;	//i为全局变量，具有静态生存值
void other() {
	// a,b为静态局部变量，具有全局寿命，局部可见，只第一次进入函数时被初始化
	static int a = 2;
	static int b;
	//c为局部变量，具有动态生存期，每次进入函数时，均会被初始化
	int c = 10;
	a += 2;
	i += 32;
	c += 5;
	cout << "othr---" << endl;
	cout << "i: " << i << " a:" << a << " b:" << " c: " << c << endl;
	b = a;
}
int main() {
	//a为静态局部变量，具有全局寿命，局部可见，
	static int a;
	// b, c具有局部变量，具有动态生存期，
	int b = -10;
	int c = 0;
	cout << "---Main--" << endl;
	cout << "i= " << i << " a: " << a << " b: " << b << " c: " << c << endl;
	c += 8;
	other();
	cout << "i= " << i << " a: " << a << " b: " << b << " c: " << c << endl;
	i += 10;
	other();
	return 0;
} 
#endif // 0
