#if 0

/*
* Ͷ��ɸ�ӣ�����һ����ʼֵ���ӣ�ÿ��Ͷ��2�����ӣ���һ��Ϊ7����11ʤ����Ϊ2,3,12����ʧ�ܡ����ޣ�������ֱ���������ڵ��������ߣ�����֮��Ϊ7��ʧ�ܡ�
* ���ڵ����⣬������	����	˵��	��Ŀ	�ļ�	��	��ֹ��ʾ״̬
����	LNK2019	�޷��������ⲿ���� "int __cdecl rollDice(void)" (?rollDice@@YAHXZ)������ main �������˸÷���Ŀǰδ���
2021.10.21
*/

#include<iostream>
#include<cstdlib>
using namespace std;
enum GameStatus
{
	WIN,LOSE,PLAYING
} status;
int main() {
	int sum, myPoint;
	enum GameStatus status;
	unsigned seed;
	int rollDice();		//����һ����ȫ�������
	cout << "����һ����ʼ����";
	cin >> seed;
	srand(seed);	//��ʼ����ʼֵ
	sum = rollDice();
	switch (sum)
	{
	case 7:		//�������Ϊ7����11ʤ��
	case 11:
		status = WIN;
		break;
	case 2:		//�������Ϊ2��3,12,��ʧ��
	case 3:
	case 12:
		status = LOSE;
		break;
	default:	//����������޽����״̬Ϊplaying,���µ���
		status = PLAYING;
		myPoint = sum;
		cout << "point is " << myPoint << endl;
		break;
	}
	while (status == PLAYING)
	{
		sum = rollDice();
		if (sum ==myPoint)
		{
			status = WIN;
		}
		else if (sum == 7)
		{
			status = LOSE;
		}
	}
	if (status == WIN)
	{
		cout << "player wins" << endl;
	}
	else
	{
		cout << "player loss" << endl;
	}
	return 0;
}
#endif // 0
