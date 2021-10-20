#if 0
/*
* 编写求π的值，利用aectan函数进行求解，指导某项绝对值不大于10e-15
* π = 16arctan(1/5)-4arctan(1/239);
*/
#include<iostream>
using namespace std;
double arctan(double x);	//构建arctan函数
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
	while (e / i > 1e-15)		//判断级数是否达到要求
	{
		double f = e / i;
		r = (i % 4 == 1) ? r + f : r - f;	//判断正负号。
		e = e * sqr;
		i += 2;
	}
	return r;
}
#endif // 0