#if 0
/*����������
* ��̬��һ�����ƣ�C++����������ĺ�������ͬ��������������ͬ�������������Ӷ��γ�����
* �β����Ͳ�ͬ����������ͬ��
* ����������ͬ
* 
* ���ӣ���ȡ����ʵ����������ƽ����
*/
#include<iostream>
using namespace std;
int sumOfSquare(int a, int b) {
	return a * a + b * b;
}
double sumOfSquare(double a, double b) {
	return a * a + b * b;
}
int main() {
	int m, n;
	cout << "����2������";
	cin >> m >> n;
	cout << "ƽ����Ϊ" << sumOfSquare(m, n) << endl;
	double x, y;
	cout << "��������ʵ��";
	cin >> x >> y;
	cout << "ʵ��������ƽ����Ϊ" << sumOfSquare(x, y) << endl;
	return 0;
}
#endif // 0