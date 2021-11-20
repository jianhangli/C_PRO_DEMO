#if 0
#include<iostream>
using namespace std;
class Point
{
public:
	//构造函数
	Point(int xx = 0, int yy = 0) {
		x = xx;
		y = yy;
	}
	//复制构造函数
	Point(Point& p);
	//x坐标函数
	int getX() {
		return x;
	}
	//y坐标函数
	int getY() {
		return y;
	}

private:
	int x, y;
};
//复制构造函数的实现
Point::Point(Point& p) {
	x = p.x;
	y = p.y;
	cout << "Call copy constructor" << endl;
}
//行参为Point类对象的函数
void fun1(Point p) {
	cout << p.getX() << endl;
}
//返回值为Point类对象的函数
Point fun2() {
	Point a(1, 2);
	return a;
}
//主程序
int main() {
	//第一个对象a
	Point a(4, 5);
	//用a去初始化话对象b
	Point b = a;
	cout << b.getX() << endl;
	//用对象b作为fun1()的实参，第二次调用复制构造函数；
	fun1(b);
	//函数的返回值为对象时，函数返回时，也会使用复制构造函数。
	b = fun2();
	cout << b.getX() << endl;
	return 0;
}
#endif // 0
