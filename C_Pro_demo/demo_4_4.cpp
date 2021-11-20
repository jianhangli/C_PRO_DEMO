/*
* 4-3类的组合，线段类
*/
#if 0



#include<iostream>
#include<cmath>
using namespace std;
//Point类的定义
class Point
{
public:
	//构造函数
	Point(int xx = 0, int yy = 0) {
		x = xx;
		y = yy;
	}
	//复制构造函数
	Point(Point &p);
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
//类的组合 线段的类
class Line
{
public:
	//构造函数
	Line(Point xp1, Point xp2);
	//复制构造函数
	Line(Line &l);
	//获取长度
	double getLen()
	{
		return len;
	}
private:
	//Point 类对象
	Point p1, p2;
	//长度
	double len;
};

//组合类构造函数实现
Line::Line(Point xp1, Point xp2) : p1(xp1), p2(xp2) {
	cout << "Calling constructor of Line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x * x + y * y);
}
//组合类的复制构造函数
Line::Line(Line& l) :p1(l.p1), p2(l.p2) {
	cout << "Calling the copy constructor of Line" << endl;
	len = l.len;
}
//主函数
int main() {
	//建立Point类对象
	Point myp1(1, 1), myp2(4, 5);
	//建立Line的类对象
	Line line(myp1, myp2);
	//复制新的Line对象
	Line line2(line);
	cout << "线段的长度为" << endl;
	cout << line.getLen() << endl;
	cout << "线段2的长度为：" << endl;
	cout << line2.getLen() << endl;
	return 0;
}
#endif // 0