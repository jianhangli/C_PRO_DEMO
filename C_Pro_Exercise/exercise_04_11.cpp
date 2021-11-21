/*
*定义实现矩阵类，属性有长和宽，计算面积
* 
*/
#if 0



#include<iostream>
using namespace std;
//定义矩阵类
class Rectangle
{
public:
	//构建函数
	Rectangle(float len, float wei) {
		float length = len;
		float width = wei;
	}
	//析构函数
	//基本函数
	float GetLength() {
		return length;
	}
	float GetWidth() {
		return width;
	}
	float GetArea() {
		return (length * width);
	}
private:
	float length;
	float width;
};
//主函数
int main() {
	float length, width;
	cout << "请输入矩形的长度：";
	cin >> length;
	cout << "请输入矩形的宽度：";
	cin >> width;
	Rectangle r(length, width);
	cout << "长为" << length << "宽为" << width << "的矩形的面积为："
		<< r.GetArea() << endl;
	return 0;
}
#endif // 0