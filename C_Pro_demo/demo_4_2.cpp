#if 0
#include<iostream>
using namespace std;
class Point
{
public:
	//���캯��
	Point(int xx = 0, int yy = 0) {
		x = xx;
		y = yy;
	}
	//���ƹ��캯��
	Point(Point& p);
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
//�в�ΪPoint�����ĺ���
void fun1(Point p) {
	cout << p.getX() << endl;
}
//����ֵΪPoint�����ĺ���
Point fun2() {
	Point a(1, 2);
	return a;
}
//������
int main() {
	//��һ������a
	Point a(4, 5);
	//��aȥ��ʼ��������b
	Point b = a;
	cout << b.getX() << endl;
	//�ö���b��Ϊfun1()��ʵ�Σ��ڶ��ε��ø��ƹ��캯����
	fun1(b);
	//�����ķ���ֵΪ����ʱ����������ʱ��Ҳ��ʹ�ø��ƹ��캯����
	b = fun2();
	cout << b.getX() << endl;
	return 0;
}
#endif // 0
