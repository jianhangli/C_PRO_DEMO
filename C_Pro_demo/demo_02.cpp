#if 0
/*
* ��д��е�ֵ������aectan����������⣬ָ��ĳ�����ֵ������10e-15
* �� = 16arctan(1/5)-4arctan(1/239);
*/
#include<iostream>
using namespace std;
double arctan(double x);	//����arctan����
int main() {
	double a = 16.0 * arctan(1 / 5.0);	
	double b = 4.0 * arctan(1 / 239.0);
	cout << "PI = " << a - b << endl;
	return 0;
}
double arctan(double x) {
	double sqr = x * x;
	double e = x;
	double r = 0;
	int i = 1;
	while (e / i > 1e-15)		//�жϼ����Ƿ�ﵽҪ��
	{
		double f = e / i;
		r = (i % 4 == 1) ? r + f : r - f;	//�ж������š�
		e = e * sqr;
		i += 2;
	}
	return r;
}
#endif // 0