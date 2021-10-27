#if 0
/*函数的重载
* 多态的一个机制，C++允许功能相近的函数在相同的作用域内以相同函数名声明，从而形成重载
* 形参类型不同，函数名相同；
* 参数个数不同
* 
* 例子：求取两个实数和整数的平方和
*/
#include<iostream>
using namespace std;
int sumOfSquare(int a, int b) {
	return a * a + b * b;
}
double sumOfSquare(double a, double b) {
	return a * a + b * b;
}
int main() {
	int m, n;
	cout << "输入2个数字";
	cin >> m >> n;
	cout << "平方和为" << sumOfSquare(m, n) << endl;
	double x, y;
	cout << "输入两个实数";
	cin >> x >> y;
	cout << "实数的两个平方和为" << sumOfSquare(x, y) << endl;
	return 0;
}
#endif // 0