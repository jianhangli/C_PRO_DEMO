#if 0



/*
* ��5.3
* ���о�̬�Ͷ�̬�����ڶ����ʱ�ӳ���
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
Clock globClock;	//�������󣬾��о�̬�����ڣ������ռ�������
//��Ĭ�Ϲ��캯����ʼ��Ϊ0:0:0
int main() {
	cout << "��һ��ʱ�����" << endl;
	globClock.show();
	globClock.setTime(1, 2, 3);
	Clock myClock(globClock);
	//ͨ�����ø��ƺ�������globClockΪ��ֵ
	cout << "�ڶ������ʱ��" << endl;
	myClock.show();
	return 0;
}
#endif // 0