#if 0




/*类的组合
* 类中成员是其他类的对象
* 类组合的构造函数设计
* 原则：不仅要负责对本类中的基本成员进行初始化，也要对对象成员初始化。
* 声明形式：
* 类名::类名（对象成员所需的形参，本类成员形参)：
*		对象1（参数），对象2（参数），
* {	
* 函数体其他语句
}

初始化顺序：按对象成员的定义顺序，先声明者先构造
初始化列表未出现的成员对象，调用默认构造函数（无参数）初始化
*/
#include<iostream>
using namespace std;
class Point
{
public:
	//构造函数
	Point(int xx,int yy){
		x = xx;
		y = yy;
	}
	//复制构造函数
	Point(Point& p);
	//取X坐标
	int getX() { return x;}
	//取y坐标
	int getY() { return y; }
	~Point();
private:
	int x, y;	//点的坐标
};
// 复制构造函数的实现
Point::Point(Point &p)
{
	x = p.x;
	y = p.y;
	cout << "复制构造函数的实现" << endl;
}
Point::~Point()
{
}
//类的组合
//Line类的定义
class Line
{
	//外部接口
public:
	Line(Point xp1,Point xp2);
	Line(Line& l);
	double getLen() { return len;}
	~Line();

private:
	Point p1, p2;
	double len;

};
//组合类的构造函数
Line::Line(Point xp1,Point xp2):p1(xp1),p2(xp2){
	cout << "Calling constructor of line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x * x + y * y);
}
//组合类的复制构造函数
Line::Line(Line& l) :p1(l.p1), p2(l.p2) {
	cout << "Calling the copy constructor of line" << endl;
	len = l.len;
}
Line::~Line()
{
}
int main(){
	Point myp1(1, 1), myp2(4, 5);
	Line line(myp1, myp2);
	Line line2(line);
	cout << "线1段的长度为：";
	cout << line.getLen() << endl;
	cout << "线段2的长度为";
	cout << line2.getLen() << endl;
	return 0;
}

#endif // 0