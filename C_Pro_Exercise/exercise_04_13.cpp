/*
* ����һ��circ�࣬���ݳ�ԱΪ�뾶����Ա������GetArea(),����Բ�����
*/
#if 0
#include<iostream>
using namespace std;
//����Circle��
class Circle
{
public:
	//��������
	Circle(int r);
	float GetArea();
private:
	int radius;
};
//���캯����ʵ��
Circle::Circle(int r)
{
	radius = r;
}
//��Ա������ʵ��
float Circle::GetArea() {
	return (3.14 * radius * radius);
}
//������
int main() {
	int radius;
	cout << "������Բ�İ뾶��";
	cin >> radius;
	Circle p(radius);
	cout << "�뾶Ϊ" << radius << "��Բ�����Ϊ��" << p.GetArea()
		<< endl;
	return 0;
}
#endif // 0