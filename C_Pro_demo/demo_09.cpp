#if 0

/*
* 内联函数
* 体内不能有循环语句和switch语句
* 内联函数的定义必须出现在内联函数第一次被调用之前，
* 对内联函数不能进行异常接口声明
* 简单的函数，编译器会自动转换
* 
* 求解圆的面积，
*/
#include<iostream>
using namespace std;
const double PI = 3.14159;
inline double calArea(double radius) {
	return PI * radius * radius;
}
int main() {
	double r = 3.0;
	double area = calArea(r);
	cout << area << endl;
	return 0;
}
#endif // 0