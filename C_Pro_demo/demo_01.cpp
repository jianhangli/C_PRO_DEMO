#if 0
/*
* ʹ�ã���#if 0����Ϊ #if 1
˵������һ��8λ��2������ת��Ϊ10���Ƶ���
�磺���� 01101001
	��� 105

*/

#include<iostream>
using namespace std;
double power(double x, int n);		//����ָ������
int main() {
	int value = 0;
	cout << "����8����";
	for (int i = 7; i >= 0; i--)
	{
		char ch;
		cin >> ch;
		if (ch == '1')
		{
			value += static_cast<int>(power(2, i));
		}
	}
	cout << "ת�����ֵΪ" << value << endl;
	return 0;
}
double power(double x, int n) {
	double val = 1.0;
	while (n--)
	{
		val *= x;
	}
	return val;
}
#endif 