/*
* 定义一个circ类，数据成员为半径，成员函数有GetArea(),计算圆的面积
*/
#if 0
#include<iostream>
using namespace std;
//定义Circle类
class Circle
{
public:
	//构建函数
	Circle(int r);
	float GetArea();
private:
	int radius;
};
//构造函数的实现
Circle::Circle(int r)
{
	radius = r;
}
//成员函数的实现
float Circle::GetArea() {
	return (3.14 * radius * radius);
}
//主函数
int main() {
	int radius;
	cout << "请输入圆的半径：";
	cin >> radius;
	Circle p(radius);
	cout << "半径为" << radius << "的圆的面积为：" << p.GetArea()
		<< endl;
	return 0;
}
#endif // 0