#if 0



/*
* ������ʵ�����鼮5.1����
*/
#include<iostream>
using namespace std;
int i;	//ȫ�������ռ��е�ȫ�ֱ���
namespace Ns{
	int j;	//��Ns�����ռ��е�ȫ�ֱ���
}
int main() {
	i = 5;	//Ϊȫ�ֱ���i��ֵ
	Ns::j = 6;	//Ϊȫ�ֱ���j��ֵ
	{		//�ֿ�1
		using namespace Ns;	//ʹ�õ�ǰ���п���ֱ������Ns�����ռ��ʶ��
		int i;	//�ֲ��������ֲ�������
		i = 7;
		cout << "i=" << i << endl;
		cout << "j=" << j << endl;
	}
	cout << "i=" << i << endl;
	return 0;
}
#endif // 0