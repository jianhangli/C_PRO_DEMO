#if 0



/*
*eg6.2
ʹ����������Ϊ��������
*/
#include<iostream>
using namespace std;
void rowSum(int a[][4], int nRow) {	//�����ά����aÿ��Ԫ�ص�ֵ�ĺͣ�nRow������
	for (int i = 0; i < nRow; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			a[i][0] += a[i][j];
		}
	}
}
int main() {	//������
	int table[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };	//��������ʼ������
	for (int i = 0; i < 3; i++)		//�������Ԫ��
	{
		for (int j = 0; j < 4; j++)
		{
			cout << table[i][j] << " ";
			cout << endl;
		}
	}
	rowSum(table, 3);		//�����Ӻ�����������к�
	for (int i = 0; i < 3; i++)		//���������
	{
		cout << "sum of row" << i << "is" << table[i][0] << endl;
	}
	return 0;
}
#endif // 0