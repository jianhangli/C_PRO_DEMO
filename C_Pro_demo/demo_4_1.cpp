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
//���캯����ʵ��
Clock::Clock(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}
//ʱ�����ã��������������
void Clock::setTime(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}
//ʱ����ʾ
inline void Clock::showTime(){
	cout << hour << ":" << minute << ":" << second << endl;
}
//������
int main() {
	Clock myclock;
	Clock(8, 2, 3);
	cout << "��һ�����ʱ��" << endl;
	myclock.setTime();	//���ó�ʼֵ
	myclock.showTime();	//��ʾʱ��
	cout << "�ڶ���ʱ������" << endl;
	myclock.setTime(1, 2, 3);
	myclock.showTime();
	return 0;
}
#endif // 0