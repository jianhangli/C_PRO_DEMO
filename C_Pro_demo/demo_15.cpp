#if 0




/*������
* ���г�Ա��������Ķ���
* ����ϵĹ��캯�����
* ԭ�򣺲���Ҫ����Ա����еĻ�����Ա���г�ʼ����ҲҪ�Զ����Ա��ʼ����
* ������ʽ��
* ����::�����������Ա������βΣ������Ա�β�)��
*		����1��������������2����������
* {	
* �������������
}

��ʼ��˳�򣺰������Ա�Ķ���˳�����������ȹ���
��ʼ���б�δ���ֵĳ�Ա���󣬵���Ĭ�Ϲ��캯�����޲�������ʼ��
*/
#include<iostream>
using namespace std;
class Point
{
public:
	//���캯��
	Point(int xx,int yy){
		x = xx;
		y = yy;
	}
	//���ƹ��캯��
	Point(Point& p);
	//ȡX����
	int getX() { return x;}
	//ȡy����
	int getY() { return y; }
	~Point();
private:
	int x, y;	//�������
};
// ���ƹ��캯����ʵ��
Point::Point(Point &p)
{
	x = p.x;
	y = p.y;
	cout << "���ƹ��캯����ʵ��" << endl;
}
Point::~Point()
{
}
//������
//Line��Ķ���
class Line
{
	//�ⲿ�ӿ�
public:
	Line(Point xp1,Point xp2);
	Line(Line& l);
	double getLen() { return len;}
	~Line();

private:
	Point p1, p2;
	double len;

};
//�����Ĺ��캯��
Line::Line(Point xp1,Point xp2):p1(xp1),p2(xp2){
	cout << "Calling constructor of line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x * x + y * y);
}
//�����ĸ��ƹ��캯��
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
	cout << "��1�εĳ���Ϊ��";
	cout << line.getLen() << endl;
	cout << "�߶�2�ĳ���Ϊ";
	cout << line2.getLen() << endl;
	return 0;
}

#endif // 0