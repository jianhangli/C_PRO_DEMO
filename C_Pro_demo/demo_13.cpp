#if 0



/*������ʵ�ж����ģ�⣬�������Ժ���Ϊ
* �ࣺͬһ�����Ĺ�ͬ���Ժ���Ϊ
* �������ʱ��ͨ�����캯�����к�����ʼ��
* ɾ������ʱ��ͨ�����������ͷ���Դ
* �ṹ�壬�����壬ö���� 
* 
* ������ͬ���������
* class ������
* {
* public:
*	���г�Ա���ⲿ�ӿڣ�   
*private:
*	˽�г�Ա
* protected��
*	�����ͳ�Ա

}
������ʱ����ʾ
*/
#include<iostream>
using namespace std;
class Clock {	//ʱ����Ķ���
public:		//�ⲿ�ӿڣ����г�Ա����
	Clock(int newH, int newM, int newS);	//���캯��
	Clock();	//Ĭ�Ϲ��캯��
	void setTime(int newH=0, int newM=0, int newS=0);
	void showTime();
private:	//˽�г�Ա����
	int hour, minute, second;
};
//ʱ�����Ա�����ľ���ʵ��
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
	Clock c1(8, 10, 0);		//�Զ������в����Ĺ��캯��
	Clock c2;		//�����޲����Ĺ��캯��
	c1.showTime();
	c2.showTime();
	return 0;
}

#endif // 0