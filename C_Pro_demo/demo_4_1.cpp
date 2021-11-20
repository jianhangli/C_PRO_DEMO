#if 0

#include<iostream>
using namespace std;
class Clock
{
public:
	Clock(int newH, int newM, int newS);
	Clock() {
		hour = 0; minute = 0; second = 0;
	}
	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();
private:
	int hour, minute, second;
};
//构造函数的实现
Clock::Clock(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}
//时间设置，输入参数有三个
void Clock::setTime(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}
//时间显示
inline void Clock::showTime(){
	cout << hour << ":" << minute << ":" << second << endl;
}
//主函数
int main() {
	Clock myclock;
	Clock(8, 2, 3);
	cout << "第一次输出时间" << endl;
	myclock.setTime();	//设置初始值
	myclock.showTime();	//显示时间
	cout << "第二次时间的输出" << endl;
	myclock.setTime(1, 2, 3);
	myclock.showTime();
	return 0;
}
#endif // 0