#if 0
/*
* �����������������������ֵ���ݣ�
* 
*/
#include<iostream>
using namespace std;
// void swap(int a, int b);  �β���ʵ���޷����ӣ�����ʧ��
void swap(int& a, int& b);		//���ô��ݣ����Խ��β���ʵ�ν�������
int main() {
	int x = 5, y = 10;
	cout << "x= " << x << "y = " << y << endl;
	swap(x, y);
	cout << "x=" << x << "y=" << y << endl;
	return 0;
}
void swap(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}
#endif // 0
