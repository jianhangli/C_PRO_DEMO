#if 0
/*
* constexpr ����
* constexpr�����εĺ�������������constexprʱ������ֵһ����constexxpr��
* ֻ��һ��return���
* ��;:��ʼ���������ʽ����
* constexpr int get_size() { return 20; }
* constexpr int foo = get_size();
*/

/*
* ����Ĭ�ϲ���ֵ�İ��������㳤���������
*/
#include<iostream>
#include<iomanip>
using namespace std;
int getVolume(int length, int width = 2, int height = 3);
int main() {
	const int X = 10, Y = 12, Z = 15;
	cout << getVolume(X, Y, Z) << endl;		//������������������˳��Ϊ������
	cout << getVolume(X, Y) << endl;		//����ǰ��2������
	cout << getVolume(X) << endl;		//���õ�һ������
}
int getVolume(int length, int width, int height) {
	cout << setw(5) << length << setw(5) << width << setw(5)
		<< height << '\t';
	return length * width * height;
}
#endif // 0
