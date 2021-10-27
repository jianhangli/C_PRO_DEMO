#if 0
/*
* constexpr 函数
* constexpr所修饰的函数，参数都是constexpr时，返回值一定是constexxpr；
* 只有一条return语句
* 用途:初始化常量表达式变量
* constexpr int get_size() { return 20; }
* constexpr int foo = get_size();
*/

/*
* 带有默认参数值的案例，计算长方形体积，
*/
#include<iostream>
#include<iomanip>
using namespace std;
int getVolume(int length, int width = 2, int height = 3);
int main() {
	const int X = 10, Y = 12, Z = 15;
	cout << getVolume(X, Y, Z) << endl;		//引用三个参数，引用顺序为从左到右
	cout << getVolume(X, Y) << endl;		//引用前面2个参数
	cout << getVolume(X) << endl;		//引用第一个参数
}
int getVolume(int length, int width, int height) {
	cout << setw(5) << length << setw(5) << width << setw(5)
		<< height << '\t';
	return length * width * height;
}
#endif // 0
