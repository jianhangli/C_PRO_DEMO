/*
* 设计一个类，给出矩形左下角和右下角的两个顶点，求矩阵的面积
*/
#if 0
#include<iostream>
using namespace std;
//定义类
class Rectangle
{
public:
	//构造函数
	Rectangle(int top1, int top2, int low1, int low2);
	//顶点的获取与设定
	int GetTop1() const { return TopA; }
	int GetTop2() const { return TopB; }
	int GetLow1() const { return LowC; }
	int GetLow2() const { return LowD; }
	void SetTop1(int top1) { TopA = top1; }
	void SetTop2(int top2) { TopB = top2; }
	void SetLow1(int low1) { LowC = low1; }
	void SetLow2(int low2) { LowD = low2; }
	//面积的计算
	int GetArea() const;
private:
	int TopA;
	int TopB;
	int LowC;
	int LowD;
};
//构造函数的实现
Rectangle::Rectangle(int top1, int top2, int low1, int low2) {
	TopA = top1;
	TopB = top2;
	LowC = low1;
	LowD = low2;
}
//矩阵面积的计算
int Rectangle::GetArea() const {
	int weight = TopB - LowD;
	int height = TopA - LowC;
	return (weight * height);
}
//主函数
int main() {
	//构建矩阵实例
	Rectangle MyRectangle(100,50, 30, 20);
	//求取矩阵面积
	int Area = MyRectangle.GetArea();
	cout << "Area: " << Area << "\n";
	return 0;
}
#endif // 0