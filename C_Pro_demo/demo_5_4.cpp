#if 0



/*
* eg5.4
具有静态数据成员的Point 类
*/
#include<iostream>
using namespace std;
class Point
{
public:
	Point(int x = 0, int y = 0) :x(x), y(y) {
		count++;
	}
	Point(Point& p) {
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() { count--; }
	int getX() { return x; }
	int getY() { return y; }
	void show() {
		cout << "object count ==" << count << endl;
	}
private:
	int x, y;
	static int count;
};
int Point::count = 0;
int main() {
	Point a(4, 5);
	cout << "Point A:" << a.getX() << "," << a.getY();
	a.show();
	Point b(a);
	cout << "Point B:" << b.getX() << "," << b.getY();
	b.show();
	return 0;
}

#endif // 0