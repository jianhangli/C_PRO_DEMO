#if 0

/*
* C++ϵͳ����
* �����Ǳ��ֹ���ģ���һ����λ
* ����ʹ�ÿ��еĺ�����ȡ����ֵ������ֵ�Լ�����ֵ
* 
*/
#include<iostream>
#include<cmath>
using namespace std;
const double PI = 3.1415926;
int main() {
	double angle;
	cout << "����һ���Ƕ�";
	cin >> angle;
	double radian = angle * PI / 180;
	cout << "sin(" << angle << ")=" << sin(radian) << endl;
	cout << "cos(" << angle << ")=" << cos(radian) << endl;
	cout << "tan(" << angle << ")=" << tan(radian) << endl;
	return 0;
}
#endif // 0