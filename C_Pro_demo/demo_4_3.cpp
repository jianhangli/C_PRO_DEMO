#if 0



#include<iostream>
using namespace std;
//固定参数
//pi的值，栅栏的价格，过道水泥价格
const float PI = 3.141593;
const float FENCE_PRICE = 35;
const float CONCRETE_PRICE = 20;

//构建circle类
class Circle
{
public:
	//构造函数
	Circle(float r);
	//计算周长
	float circumference();
	//计算面积
	float area();
private:
	//圆的半径
	float radius;
};
//类的实现
//构造函数
Circle::Circle(float r)
{
	radius = r;
}
//计算圆的周长
float Circle::circumference()
{
	return PI * 2 * radius;
}

//计算圆的面积
float Circle::area() {
	return PI * radius * radius;
}

//主函数
int main() {
	float radius;
	//提示用户输入半径
	cout << "输入半径：" << endl;
	cin >> radius;
	//游泳池边界对象
	Circle pool(radius);
	//栅栏对象
	Circle poolRim(radius + 3);
	//计算栅栏价格
	float fenceCost = poolRim.circumference() * FENCE_PRICE;
	cout << "栅栏价格为：" << fenceCost << endl;
	//计算过道价格
	float concreteCost = (poolRim.area() - pool.area()) * CONCRETE_PRICE;
	cout << "过道价格为：" << concreteCost << endl;
}
#endif // 0