#if 0

/*
* ��������
* ���ڲ�����ѭ������switch���
* ���������Ķ���������������������һ�α�����֮ǰ��
* �������������ܽ����쳣�ӿ�����
* �򵥵ĺ��������������Զ�ת��
* 
* ���Բ�������
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