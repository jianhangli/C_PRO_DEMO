#if 0
/*
* 输入两个整数交换后输出（值传递）
* 
*/
#include<iostream>
using namespace std;
// void swap(int a, int b);  形参与实参无法链接，传递失败
void swap(int& a, int& b);		//引用传递，可以将形参与实参进行链接
int main() {
	int x = 5, y = 10;
	cout << "x= " << x << "y = " << y << endl;
	swap(x, y);
	cout << "x=" << x << "y=" << y << endl;
	return 0;
}
void swap(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}
#endif // 0
