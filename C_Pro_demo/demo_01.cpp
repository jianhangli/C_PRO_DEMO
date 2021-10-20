#if 0
/*
* 使用，将#if 0更改为 #if 1
说明，将一个8位的2进制数转化为10进制的数
如：输入 01101001
	输出 105

*/

#include<iostream>
using namespace std;
double power(double x, int n);		//定义指数函数
int main() {
	int value = 0;
	cout << "输入8进制";
	for (int i = 7; i >= 0; i--)
	{
		char ch;
		cin >> ch;
		if (ch == '1')
		{
			value += static_cast<int>(power(2, i));
		}
	}
	cout << "转换后的值为" << value << endl;
	return 0;
}
double power(double x, int n) {
	double val = 1.0;
	while (n--)
	{
		val *= x;
	}
	return val;
}
#endif 