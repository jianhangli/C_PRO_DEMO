#if 0



/*
* 例5.3
* 具有静态和动态生存期对象的时钟程序
*/
#include<iostream>
using namespace std;
class Clock
{
public:
	Clock();
	void setTime(int newH, int newM, int newS);
	void show();
	~Clock();
private:
	int hour, minute, second;
};

Clock::Clock():hour(0),minute(0),second(0){}
void Clock::setTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}
void Clock::show() {
	cout << hour << ":" << minute << ":" << second << endl;
}
Clock::~Clock()
{
}
Clock globClock;	//声明对象，具有静态生存期，命名空间作用域
//由默认构造函数初始化为0:0:0
int main() {
	cout << "第一次时间输出" << endl;
	globClock.show();
	globClock.setTime(1, 2, 3);
	Clock myClock(globClock);
	//通过调用复制函数，以globClock为初值
	cout << "第二次输出时间" << endl;
	myClock.show();
	return 0;
}
#endif // 0