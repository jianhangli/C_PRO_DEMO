#if 0

/*
* C++系统函数
* 函数是表现功能模块的一个单位
* 案例使用库中的函数求取正弦值，余弦值以及正切值
* 
*/
#include<iostream>
#include<cmath>
using namespace std;
const double PI = 3.1415926;
int main() {
	double angle;
	cout << "输入一个角度";
	cin >> angle;
	double radian = angle * PI / 180;
	cout << "sin(" << angle << ")=" << sin(radian) << endl;
	cout << "cos(" << angle << ")=" << cos(radian) << endl;
	cout << "tan(" << angle << ")=" << tan(radian) << endl;
	return 0;
}
#endif // 0