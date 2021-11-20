/*
* 4-3�����ϣ��߶���
*/
#if 0



#include<iostream>
#include<cmath>
using namespace std;
//Point��Ķ���
class Point
{
public:
	//���캯��
	Point(int xx = 0, int yy = 0) {
		x = xx;
		y = yy;
	}
	//���ƹ��캯��
	Point(Point &p);
	//x���꺯��
	int getX() {
		return x;
	}
	//y���꺯��
	int getY() {
		return y;
	}

private:
	int x, y;
};
//���ƹ��캯����ʵ��
Point::Point(Point& p) {
	x = p.x;
	y = p.y;
	cout << "Call copy constructor" << endl;
}
//������ �߶ε���
class Line
{
public:
	//���캯��
	Line(Point xp1, Point xp2);
	//���ƹ��캯��
	Line(Line &l);
	//��ȡ����
	double getLen()
	{
		return len;
	}
private:
	//Point �����
	Point p1, p2;
	//����
	double len;
};

//����๹�캯��ʵ��
Line::Line(Point xp1, Point xp2) : p1(xp1), p2(xp2) {
	cout << "Calling constructor of Line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x * x + y * y);
}
//�����ĸ��ƹ��캯��
Line::Line(Line& l) :p1(l.p1), p2(l.p2) {
	cout << "Calling the copy constructor of Line" << endl;
	len = l.len;
}
//������
int main() {
	//����Point�����
	Point myp1(1, 1), myp2(4, 5);
	//����Line�������
	Line line(myp1, myp2);
	//�����µ�Line����
	Line line2(line);
	cout << "�߶εĳ���Ϊ" << endl;
	cout << line.getLen() << endl;
	cout << "�߶�2�ĳ���Ϊ��" << endl;
	cout << line2.getLen() << endl;
	return 0;
}
#endif // 0