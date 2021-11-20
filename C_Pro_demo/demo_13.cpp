#if 0



/*对象：现实中对象的模拟，具有属性和行为
* 类：同一类对象的共同属性和行为
* 定义对象时，通过构造函数进行函数初始化
* 删除对象时，通过析构函数释放资源
* 结构体，联合体，枚体类 
* 
* 设计类等同于设计类型
* class 类名称
* {
* public:
*	公有成员（外部接口）   
*private:
*	私有成员
* protected：
*	保护型成员

}
案例：时钟显示
*/
#include<iostream>
using namespace std;
class Clock {	//时钟类的定义
public:		//外部接口，公有成员函数
	Clock(int newH, int newM, int newS);	//构造函数
	Clock();	//默认构造函数
	void setTime(int newH=0, int newM=0, int newS=0);
	void showTime();
private:	//私有成员变量
	int hour, minute, second;
};
//时钟类成员函数的具体实现
Clock::Clock() :hour(0), minute(0), second(0) {};
Clock::Clock(int newH, int newM, int newS) :hour(newH), minute(newM), second(newS) {};
void Clock::setTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}
void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}
int main() {
	Clock c1(8, 10, 0);		//自动调用有参数的构造函数
	Clock c2;		//调用无参数的构造函数
	c1.showTime();
	c2.showTime();
	return 0;
}

#endif // 0